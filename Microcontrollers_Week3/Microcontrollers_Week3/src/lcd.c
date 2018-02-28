/*
 * lcd.c
 *
 * Created: 22-2-2018 15:41:04
 *  Author: Rick Verstraten & Lars Moesman
 */ 
#include "lcd.h"
#include <avr/io.h>
#include <avr/delay.h>
#include <string.h>
#define LCD_E 3
#define LCD_RS 2


void init(){
	DDRC = 0xFF;
	lcd_command(0x02);
	lcd_command(0x28);
	lcd_command(0x0C);
	lcd_command(0x06);
	lcd_command(0x80);
}

void display_text(char string[], int line){
	if(!line){lcd_command(0x80);}
	else{lcd_command(0xC0);}
	for(int i = 0; i < strlen(string); i++) {
		lcd_writeChar(string[i]);
	}
}
void lcd_writeChar(char teken){
	PORTC = teken & 0xf0;
	PORTC = PORTC | 0x0C;
	_delay_ms(1);
	PORTC = 0x04;
	
	PORTC = (teken & 0x0f) << 4;
	PORTC = PORTC | 0x0C;
	
	_delay_ms(1);
	PORTC = 0x00;
	
	
}

void lcd_command(unsigned char input){
	PORTC = input & 0xf0;
	PORTC = PORTC | 0x08;
	_delay_ms(1);
	PORTC = 0x04;
	
	PORTC = (input & 0x0f) << 4;
	PORTC= PORTC | 0x08;
	_delay_ms(1);
	PORTC = 0x00;
}