#include <wiringPi.h>
#include <pcf8591.h>
#include <stdio.h>
#define	LED		  1
#define Q2W_ABASE       120
int main()
{ wiringPiSetup();
  pcf8591Setup (Q2W_ABASE, 0x48) ;
  int val=1,value;
  pinMode(6,INPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
	digitalWrite(6,HIGH);
	digitalWrite(10,HIGH);
	digitalWrite(11,HIGH);
  
  for(;;)
  { 
//	digitalWrite(6,LOW);
//	delay(500);
//	digitalWrite(6,HIGH);
 //       digitalWrite(10,LOW);
//	delay(500);
//	digitalWrite(10,HIGH);
//	digitalWrite(11,LOW);
//	delay(500);
//	digitalWrite(11,HIGH);
        val=digitalRead(6);
    value = analogRead  (Q2W_ABASE + 0) ;
    printf("value=%d   ",value);
	printf("val=%d\n",val);
	delay(300);
	  }
	
	}
