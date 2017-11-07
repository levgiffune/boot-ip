//include library to interface with LCD
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print message to the LCD.
  lcd.write("Wiating for pi");
  //next line
  lcd.setCursor(0, 1);
  //print message to LCD
  lcd.write("to boot.");
}

void loop() {
  
}

/*maybe...
 
  void loading() {
  lcd.clear()
  // Print message to the LCD.
  lcd.write("Wiating for pi");
  //next line
  lcd.setCursor(0, 1);
  //print message to LCD
  lcd.write("to boot.");
    lcd.clear()
  // Print message to the LCD.
  lcd.write("Wiating for pi");
  //next line
  lcd.setCursor(0, 1);
  //print message to LCD
  lcd.write("to boot..");
    lcd.clear()
  // Print message to the LCD.
  lcd.write("Wiating for pi");
  //next line
  lcd.setCursor(0, 1);
  //print message to LCD
  lcd.write("to boot...");
    lcd.clear()
  // Print message to the LCD.
  lcd.write("Wiating for pi");
  //next line
  lcd.setCursor(0, 1);
  //print message to LCD
  lcd.write("to boot ..");
    lcd.clear()
  // Print message to the LCD.
  lcd.write("Wiating for pi");
  //next line
  lcd.setCursor(0, 1);
  //print message to LCD
  lcd.write("to boot  .");
    lcd.clear()
  // Print message to the LCD.
  lcd.write("Wiating for pi");
  //next line
  lcd.setCursor(0, 1);
  //print message to LCD
  lcd.write("to boot   ");
}
*/


