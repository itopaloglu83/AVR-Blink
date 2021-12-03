#include <avr/io.h>
#include <util/delay.h>

int main()
{
    // Set PORTB Pin 5 as output.
    DDRB |= _BV(DDB5);
    while (1)
    {
        // Toggle PORTB Pin 5.
        PORTB ^= _BV(PB5);
        // Delay.
        _delay_ms(500);
    }
}