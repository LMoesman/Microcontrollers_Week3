/*
 * Microcontrollers_Week3.c
 *
 * Created: 22-2-2018 15:35:11
 * Author : Rick Verstraten & Lars Moesman
 */ 

#include <avr/io.h>
#include "main.h"
#include "lcd.h"
#include <util/delay.h>
#include <avr/interrupt.h>

int main(void)
{
	DDRD = 0xFF;
	init();
	display_text("HOI-LARS", 0);
	//display_text("Paul", 1);
    /* Replace with your application code */
//    while (1) 
 //   {
//		
//		PORTD ^= (1<<7);	// Toggle PORTD.7
	//	_delay_ms( 20 );
		//
    //}/
}

