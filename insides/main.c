#include <avr/interrupt.h>
#include <avr/io.h>

int main() 
{
    DDRB |= 1<<PB5;

    TCCR1B |= (1 << CS12);

    if (TCNT1 >= 62500) 
    {
    PORTB ^= (1<<PB5);
    TCNT1 = 0;
    }
    sei();
    while (1) { } // nuthin'!
} 
