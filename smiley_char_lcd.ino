// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// make some custom characters:
byte smiley[8] = {
0b00000,
0b00000,
0b01010,
0b00000,
0b10001,
0b01110,
0b00000,
0b00000
};



void setup() 
{
	// initialize LCD and set up the number of columns and rows: 
	lcd.begin(16, 2);

	// create a new character
	lcd.createChar(0, smiley);
	
}

// Print All the custom characters
void loop() 
{ 
	lcd.setCursor(0, 0);
	lcd.write(byte(0));

}