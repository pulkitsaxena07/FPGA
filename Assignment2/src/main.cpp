#include <Arduino.h>
# define A 2
# define B 3
# define C 4
int a,b,c,out;

int NAND(int i1,int i2)
{
	return !(i1 & i2);
}

void setup() {
  pinMode(LED_BUILTIN,OUTPUT);
  pinMode(A,INPUT);
  pinMode(B,INPUT);
  pinMode(C,INPUT);

  // put your setup code here, to run once:
}

void loop() {
  

	a=digitalRead(A);
	b=digitalRead(B);
	c=digitalRead(C);
	//a=1;b=0;c=1;
	out=NAND(NAND(a,b),NAND(a,c));
  	digitalWrite(LED_BUILTIN,out);
		
  // put your main code here, to run repeatedly:
}

