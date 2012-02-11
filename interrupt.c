#include <msp430.h>
#define LED1 BIT0
#define TAIFG_VAL (TACTL & TAIFG)
#define CLEAR_TAIFG (TACTL &= ~TAIFG)
#define TOGGLE_LED1 (P1OUT ^= LED1)
main()
{
TACCR0=0xf000;
TACTL = TASSEL_2 | MC_3 | ID_3;
P1DIR = LED1;
P1OUT = LED1;
while(1) {
while(TAIFG_VAL)
{TOGGLE_LED1;
CLEAR_TAIFG;}
}
}

