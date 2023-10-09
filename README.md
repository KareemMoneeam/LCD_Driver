# LCD_Driver
Generic LCD Driver - Ready to use for any microcontroller  

Used GPIO -> AVR Atmega32/Atmega16

## Driver description
Our Driver has eight functions:

- LCD_init();

  Description :
  
1 - Initialize the LCD:
  
1. Setup the LCD pins directions by use the GPIO driver.
2. Setup the LCD Data Mode 4-bits or 8-bits.


2- LCD_sendCommand()
  
Description :
- Send the required command to the screen.


3- LCD_displayCharacter()

Description :
- Display the required character on the screen.
 

4- LCD_displayString()

Description :

- Display the required string on the screen.
  

5- LCD_moveCursor()

Description :

 - Move the cursor to a specified row and column index on the screen.


6- LCD_displayStringRowColumn()

Description :

- Display the required string in a specified row and column index on the screen.

7- LCD_intgerToString()

Description :
Display the required decimal value on the screen.

8- LCD_clearScreen()

Description :
 
- Send the clear screen command.
