#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.print("Wiating for pi");
  lcd.setCursor(0, 1);
  lcd.print("to boot.");
}

void loop() {
  if (Serial.available() > 0) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("ip:");
    lcd.setCursor(0, 1);
    lcd.print(Serial.readString());
  }
  else {
    load();
  }
}


void load() {
  lcd.clear();
  lcd.print("Wiating for pi");
  lcd.setCursor(0, 1);
  lcd.print("to boot");
  lcd.clear();
  lcd.setCursor(0, 1);
  lcd.print("to boot.");
  lcd.clear();
  lcd.print("Wiating for pi");
  lcd.setCursor(0, 1);
  lcd.print("to boot..");
  lcd.clear();
  lcd.print("Wiating for pi");
  lcd.setCursor(0, 1);
  lcd.print("to boot...");
  lcd.clear();
  lcd.print("Wiating for pi");
  lcd.setCursor(0, 1);
  lcd.print("to boot ..");
  lcd.clear();
  lcd.print("Wiating for pi");
  lcd.setCursor(0, 1);
  lcd.print("to boot  .");
  lcd.clear();
  lcd.print("Wiating for pi");
  lcd.setCursor(0, 1);
  lcd.print("to boot   ");
}



