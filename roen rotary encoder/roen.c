#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>
#include <wiringPi.h>

#define  SWPin     0
#define  RoAPin    3
#define  RoBPin    2

static volatile int globalCounter = 0 ;

unsigned char flag;
unsigned char Last_RoB_Status;
unsigned char Current_RoB_Status;

void btnISR(void) //中断服务程序(ISR),按下按钮时出发中断，该中断服务的任务是对计数值进行清零
{
  globalCounter = 0;
}

void rotaryDeal(void)
{
  Last_RoB_Status = digitalRead(RoBPin);

  while(!digitalRead(RoAPin)){
    Current_RoB_Status = digitalRead(RoBPin);
    flag = 1;
  }

  if(flag == 1){
    flag = 0;
    if((Last_RoB_Status == 0)&&(Current_RoB_Status == 1)){
      globalCounter ++;	//向右旋转一步，全局变量globalCounter加1
    }
    if((Last_RoB_Status == 1)&&(Current_RoB_Status == 0)){
      globalCounter --;       //向左旋转一步，全局变量globalCounter减1
    }
  }
}

int main(void)
{
  if(wiringPiSetup() < 0){
    fprintf(stderr, "Unable to setup wiringPi:%s\n",strerror(errno));
    return 1;
  }

  pinMode(SWPin, INPUT);
  pinMode(RoAPin, INPUT);
  pinMode(RoBPin, INPUT);

  pullUpDnControl(SWPin, PUD_UP);      //将GPIO0设置为带上拉电阻的模式

  if(wiringPiISR(SWPin, INT_EDGE_FALLING, &btnISR) < 0){    //设置中断为下降沿触发
    fprintf(stderr, "Unable to init ISR\n",strerror(errno));	
    return 1;
  }
  
  while(1){
    rotaryDeal();
    printf("%d\n", globalCounter);
  }

  return 0;
}
