#include <wiringPi.h>
int main()
{ wiringPiSetup();
  pinMode(6,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
	digitalWrite(6,HIGH);
	digitalWrite(10,HIGH);
	digitalWrite(11,HIGH);
  
  for(;;)
  { 
	digitalWrite(6,LOW);
	delay(500);
	digitalWrite(6,HIGH);
        digitalWrite(10,LOW);
	delay(500);
	digitalWrite(10,HIGH);
	digitalWrite(11,LOW);
	delay(500);
	digitalWrite(11,HIGH);
	  
	  
	  }
	
	}
