#include <wiringPi.h>
#include <pcf8591.h>
#include <stdio.h>
#define	LED		  1
#define Q2W_ABASE       120
int main()
{ wiringPiSetup();
  pcf8591Setup (Q2W_ABASE, 0x48) ;
  int value, value1;
  
  for(;;)
  { 
    value = analogRead  (Q2W_ABASE + 0) ;
    value1 = analogRead  (Q2W_ABASE + 1) ;
    printf("value=%d\n   ",value);
//    printf("value1=%d\n   ",value1);
	delay(100);
	  }
	
	}


