/*
 * Microcontrollers_Week3.c
 *
 * Created: 22-2-2018 15:35:11
 * Author : Rick Verstraten & Lars Moesman
 */ 

#include <avr/io.h>
#include "main.h"
#include "lcd.h"
#include <stdio.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include <stdlib.h>
void executeB2(){
		DDRD &= 0x00;
		TCCR2 = 0b00000111;
		DDRB = 0xFF;
		while(1){

		PORTB = TCNT2;
		}
}
int bin2int(const unsigned char *bin)
{
	int i, j;
	j = sizeof(int)*8;
	while ( (j--) && ((*bin=='0') || (*bin=='1')) ) {
		i <<= 1;
		if ( *bin=='1' ) i++;
		bin++;
	}
	return i;
}
void executeB3(){
	DDRD = 0x00;
	TCCR2 = 0b00000101;
	DDRB = 0xFF;
	while(1){	
	PORTB = TCNT2/10;
	_delay_ms(1000);
	}/*
	int i = 12;
	char e;
	char buffer[16];
	e = sprintf(buffer,"%d",i);

	lcd_write_string(&e);
	_delay_ms(100);
	
	i = TCNT2;
	_delay_ms(2000);
	lcd_write_cmd(0x01);
	_delay_ms(1);
	lcd_write_cmd(0x80);
		
	e = sprintf(buffer,"%d",i);
	
	lcd_write_string(&e);
	_delay_ms(100);
	
	i = TCNT2;
	_delay_ms(2000);
	lcd_write_cmd(0x01);
	_delay_ms(1);
	lcd_write_cmd(0x80);
	
	e = sprintf(buffer,"%d",i);
	
	lcd_write_string(&e);
	_delay_ms(100);
	*/
	//}
}
int main(void)
{
	DDRD = 0xFF;
	init_4bits_mode();
	executeB3();
	//display_text("Paul", 1);
    /* Replace with your application code */
//    while (1) 
 //   {
		
//		PORTD ^= (1<<7);	// Toggle PORTD.7
	//	_delay_ms( 20 );
		//
    //}/
}


