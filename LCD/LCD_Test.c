/*
 ============================================================================
 Name        : LCD_Test.c
 Author      : Kareem Abd El-Moneam
 Description : Test the LCD Driver 8-bits Data Mode
 Date        : 4/10/2023
 ============================================================================
 */
#include "lcd.h"
#include <util/delay.h>

int main(void)
{
	LCD_init(); /* Initialize the LCD */
	LCD_displayStringRowColumn(0,2,"My LCD Driver");
	LCD_displayStringRowColumn(1,3,"Embedded WS");
	_delay_ms(2000); /* wait two seconds */

	LCD_clearScreen(); /* clear the LCD display */
	LCD_displayString("LCD Interfacing");
	LCD_displayStringRowColumn(1,4,"Group ");
	LCD_intgerToString(80);
	_delay_ms(2000); /* wait two seconds */
	LCD_clearScreen(); /* clear the LCD display */

	LCD_moveCursor(0,5);
	LCD_displayString("Kareem");
	LCD_displayStringRowColumn(1,2,"Abd El-Moneam");

	while(1)
	{

	}
}
