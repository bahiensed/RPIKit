#include <wiringPi.h>
//#define 1 1
//#define 2 2
//#define 3 3
//#define 4 4
//#define 5 5
//#define 6 6
//#define 7 7
//#define 8 8
#define A 9
#define B 10
#define C 11
#define D 12
#define E 13
#define F 14
#define G 15
#define H 16




int main()
{
	wiringPiSetup();
	pinMode(1,OUTPUT);
	pinMode(2,OUTPUT);
	pinMode(3,OUTPUT);
	pinMode(4,OUTPUT);
	pinMode(5,OUTPUT);
	pinMode(6,OUTPUT);
	pinMode(7,OUTPUT);
	pinMode(8,OUTPUT);
	pinMode(A,OUTPUT);
	pinMode(B,OUTPUT);
	pinMode(C,OUTPUT);
	pinMode(D,OUTPUT);
	pinMode(E,OUTPUT);
	pinMode(F,OUTPUT);
	pinMode(G,OUTPUT);
	pinMode(H,OUTPUT);
	
	for(;;)
	{
		digitalWrite(A,HIGH);
		digitalWrite(B,HIGH);
		digitalWrite(H,HIGH);
		digitalWrite(1,LOW);
		
		digitalWrite(2,HIGH);
		digitalWrite(D,LOW);
		digitalWrite(E,LOW);
		digitalWrite(F,LOW);
		delay(1);
		digitalWrite(2,LOW);
		digitalWrite(D,HIGH);
		digitalWrite(E,HIGH);
		digitalWrite(F,HIGH);
		
		
		digitalWrite(C,LOW);
		digitalWrite(3,HIGH);
		digitalWrite(4,HIGH);
		digitalWrite(5,HIGH);
		digitalWrite(6,HIGH);
		digitalWrite(7,HIGH);
		delay(1);
		digitalWrite(C,HIGH);
		digitalWrite(3,LOW);
		digitalWrite(4,LOW);
		digitalWrite(5,LOW);
		digitalWrite(6,LOW);
		digitalWrite(7,LOW);
		
		
		
		digitalWrite(8,HIGH);
		digitalWrite(D,LOW);
		digitalWrite(E,LOW);
		digitalWrite(F,LOW);
		delay(1);
		digitalWrite(8,LOW);
		digitalWrite(D,HIGH);
		digitalWrite(E,HIGH);
		digitalWrite(F,HIGH);
		
		
		digitalWrite(G,LOW);
		digitalWrite(3,HIGH);
		digitalWrite(4,HIGH);
		digitalWrite(5,HIGH);
		digitalWrite(6,HIGH);
		digitalWrite(7,HIGH);
		delay(1);
		digitalWrite(G,HIGH);
		digitalWrite(3,LOW);
		digitalWrite(4,LOW);
		digitalWrite(5,LOW);
		digitalWrite(6,LOW);
		digitalWrite(7,LOW);
		}
	
	
	}
