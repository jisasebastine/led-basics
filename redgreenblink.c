#include <msp430.h>
main()
{
P1DIR=0x41;
int p,i=10000000;
while(1)
{
p=i*i;

P1OUT=0x40;//green led on

while(p>0)
p--;
p=i*i;

P1OUT=0;//green led off

while(p>0)
p--;

P1OUT=1;//red led on

p=i*i;
while(p>0)
p--;

P1OUT=0;//red led off

p=i*i;
while(p>0)
p--;
}
}
