#include <avr/io.h>
#include <util/delay.h>

 
int main (void)
{
	
   // declare input pins
   DDRD |= 0b00000000;	
   // Arduino boards have a LED at PB5
   // set PB5, pin 13 of arduino as output
   DDRB    |= ((1 << DDB5));
   

   // declare variables
   int x,y,z,f,ip;

   while (1) {
    
	   ip = PIND;
	   x = ip & 0b00000100;
	   y = ip & 0b00001000;
	   z = ip & 0b00010000;

	   f = !(!(z&&x) && !(z&&y));

	   if(f == 1)
              PORTB = ((1 <<  PB5));
	   else
	      PORTB = ((0 << PB5));
   }

  return 0;

}
