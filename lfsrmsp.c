#include <msp430.h> 
#include <stdint.h>


void delay()
{ 
int i;
for(i=0;i<30000;i++);
}
main()
{
uint16_t lfsr = 0xACE1u;
unsigned bit;

P1DIR=0x41;
P1OUT=0x40;
do {        
       bit  = ((lfsr >> 0) ^ (lfsr >> 2) ^ (lfsr >> 3) ^ (lfsr >> 5) ) & 1;
      lfsr =  (lfsr >> 1) | (bit << 15);
if(lfsr>>6 &1)
{
P1OUT^=0x40;
delay();
}
if(lfsr&1)
{
P1OUT^=0x41;
delay();
}          
	 
} while(lfsr != 0xACE1u);
}
