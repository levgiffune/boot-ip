//import code to interface with the LCD
#include <LiquidCrystal.h>

//initialize LiquidCrustal with pin numbers
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  //start serial communications with computer
  Serial.begin(9600);
  //tell LiquidCrystal the size of the LCD
  lcd.begin(16, 2);
  //print loading message
  lcd.print("Waiting for pi");
  lcd.setCursor(0, 1);
  lcd.print("to boot.");
}

void loop() {
  //if the computer recoginized us, print the ip
  if (Serial.available() > 0) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("ip:");
    lcd.setCursor(0, 1);
    lcd.print(Serial.readString());
  }
  //otherwise, display loading animation
  else {
    load();
  }
}

//loading animation
void load() {
  lcd.clear();
  lcd.print("Wiating for pi");
  lcd.setCursor(0, 1);
  lcd.print("to boot");
  delay(1000);
  lcd.clear();
  lcd.setCursor(0, 1);
  lcd.print("to boot.");
  delay(1000);
  lcd.clear();
  lcd.print("Wiating for pi");
  lcd.setCursor(0, 1);
  lcd.print("to boot..");
  delay(1000);
  lcd.clear();
  lcd.print("Wiating for pi");
  lcd.setCursor(0, 1);
  lcd.print("to boot...");
  delay(1000);
  lcd.clear();
  lcd.print("Wiating for pi");
  lcd.setCursor(0, 1);
  lcd.print("to boot ..");
  delay(1000);
  lcd.clear();
  lcd.print("Wiating for pi");
  lcd.setCursor(0, 1);
  lcd.print("to boot  .");
  delay(1000);
  lcd.clear();
  lcd.print("Wiating for pi");
  lcd.setCursor(0, 1);
  lcd.print("to boot   ");
  delay(1000);
}



