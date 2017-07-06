#include <wiringPi.h>
#include <stdio.h>
int main()
{ wiringPiSetup();
  int val;
  pinMode(6,INPUT);
//  digitalWrite(6,LOW);
  
  for(;;)
  { 
    val=digitalRead(6);
    printf("val=%d\n",val);
    delay(300);
	  }
	
	}
