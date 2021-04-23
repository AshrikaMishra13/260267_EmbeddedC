#include <avr/io.h>
#include <util/delay.h>
int main(void)
{
    // Direction of ports
    DDRB|=(1<<PB0);
    DDRD&=~(1<<PD1);
    DDRD&=~(1<<PD4);

    // PULL-UP +5V for push-buttons
    PORTD|=(1<<PD1);
    PORTD |=(1<<PD4);

    while(1)
    {
        if(!(PIND&(1<<PD1)) && !(PIND&(1<<PD4)))
        {
        PORTB|=(1<<PB0);
        _delay_ms(200);
        }
        else
        {
            PORTB&=~(1<<PB0);
            _delay_ms(200);
        }
    }

    return 0;
}
