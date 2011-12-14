#include <msp430.h>
main()
{
while(1)
{
int i=10000000;
i=i*i;
P1DIR=0x40;
P1OUT=0x40;
while(i>0)
i--;
i=10000000;
i=i*i;
P1OUT=0;
while(i>0)
i--;
}
}
