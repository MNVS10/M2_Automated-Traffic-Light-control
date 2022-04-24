/*
 */

#include"inc.h"
int main(void)
{
    DDRB |= (1<<DDB2)|(1<<DDB3)|(1<<DDB1)|(1<<DDB0)|(1<<DDB6)|(1<<DDB7);

    while(1){
        PORTB |=(1<<PORTB1);
        PORTB &=~(1<<PORTB2);
		PORTB &=~(1<<PORTB3);
		PORTB |=(1<<PORTB0);
        PORTB &=~(1<<PORTB6);
		PORTB &=~(1<<PORTB7);
		_delay_ms(3000);

        PORTB &=~(1<<PORTB1);
        PORTB |=(1<<PORTB2);
		PORTB &=~(1<<PORTB3);
		PORTB &=~(1<<PORTB0);
        PORTB |=(1<<PORTB7);
		PORTB &=~(1<<PORTB6);
		_delay_ms(1000);

		PORTB &=~(1<<PORTB1);
        PORTB &=~(1<<PORTB2);
		PORTB |=(1<<PORTB3);
		PORTB &=~(1<<PORTB7);
        PORTB &=~(1<<PORTB0);
		PORTB |=(1<<PORTB6);
		_delay_ms(3000);

		PORTB &=~(1<<PORTB1);
        PORTB |=(1<<PORTB2);
		PORTB &=~(1<<PORTB3);
		PORTB &=~(1<<PORTB0);
        PORTB |=(1<<PORTB7);
		PORTB &=~(1<<PORTB6);
		_delay_ms(1000);



    }



    return 0;
}
