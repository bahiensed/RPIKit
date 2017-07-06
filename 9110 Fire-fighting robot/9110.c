#include <wiringPi.h>
int main()
{ wiringPiSetup();
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  
  for(;;)
  { 
	digitalWrite(4,LOW);
	digitalWrite(5,HIGH);
	delay(2000);
	digitalWrite(4,LOW);
	digitalWrite(5,LOW);
	delay(500);
	digitalWrite(4,HIGH);
	digitalWrite(5,LOW);
	delay(2000);
	digitalWrite(4,LOW);
	digitalWrite(5,LOW);
	delay(500);
	
	
  }
	
}
