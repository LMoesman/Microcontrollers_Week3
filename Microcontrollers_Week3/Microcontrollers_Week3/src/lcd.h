/*
 * lcd.h
 *
 * Created: 22-2-2018 15:41:31
 *  Author: Rick Verstraten & Lars Moesman
 */
void init(void);
void lcd_strobe_lcd_e(void);
void display_text(char*, int);
void set_cursor(int);

void lcd_writeChar(char);
void lcd_command(unsigned char);

#ifndef LCD_H_
#define LCD_H_
#endif /* LCD_H_ */