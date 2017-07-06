#include <wiringPi.h>

int main()
{   
	wiringPiSetup();
	int i=0;
	pinMode(15,OUTPUT);
	for(;;)
	{ 
		for(i=0;i<100;i++)
		
		{
		 digitalWrite(15,HIGH);
		 delay(1);
		 digitalWrite(15,LOW);
		 delay(1);
			}
		
		for(i=0;i<100;i++)
		{
			digitalWrite(15,HIGH);
			delay(2);
			digitalWrite(15,LOW);
			delay(2);
			
			
			}
	  
	  }
	
	
	
	
	}
