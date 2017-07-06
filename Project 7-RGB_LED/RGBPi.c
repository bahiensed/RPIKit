#include <wiringPi.h>
#include <softPwm.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


void color(unsigned char red, unsigned char green, unsigned char blue)
{ 
	softPwmWrite(15,100-red);
	softPwmWrite(16,100-green);
	softPwmWrite(1,100-blue);
	
	
	}   	

int main()
{  
	   wiringPiSetup();
   softPwmCreate(15,0,100);
   softPwmCreate(16,0,100);
   softPwmCreate(1,0,100);
   
   //pinMode(5,PWM_OUTPUT);
   //pinMode(6,OUTPUT);
   //pinMode(10,PWM_OUTPUT);
   //pinMode(11,PWM_OUTPUT);
   	
   for(;;)
   {
	color(100,0,0);
    delay(1000);
	color(0,100,0);
	delay(1000);
	color(0,0,100);
	delay(1000);
	
	color(100,100,0);
    delay(1000);
	color(100,100,100);
	delay(1000);
	color(50,0,100);
	delay(1000);
	color(0,0,0);
	delay(1000);
	
	   }	
   	}

