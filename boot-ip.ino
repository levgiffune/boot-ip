//import code to interface with the LCD
#include <LiquidCrystal.h>
#include <String.h>

//initialize LiquidCrustal with pin numbers
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
boolean recieved;
void setup() {
  //start serial communications with computer
  Serial.begin(9600);
  //tell LiquidCrystal the size of the LCD
  lcd.begin(16, 2);
  //print loading message
  lcd.print("Waiting for pi");
  lcd.setCursor(0, 1);
  lcd.print("to boot.");
  recieved = false;
}

void loop() {
  //if the computer recoginized us, print the ip
  if (Serial.available() > 0) {
    recieved = true;
    Serial.print("connected");
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("ip:");
    lcd.setCursor(0, 1);
    char data = Serial.read();
    char str[2];
    str[0] = data;
    str[1] = '\0';
    lcd.print(str);
  }
  //otherwise, display loading animation
  else if(recieved == false){
    load();
  }
}

//loading animation
void load() {
  lcd.clear();
  lcd.print("Waiting for pi");
  lcd.setCursor(0, 1);
  lcd.print("to boot.");
  delay(250);
  lcd.clear();
  lcd.print("Waiting for pi");
  lcd.setCursor(0, 1);
  lcd.print("to boot..");
  delay(250);
  lcd.clear();
  lcd.print("Waiting for pi");
  lcd.setCursor(0, 1);
  lcd.print("to boot...");
  delay(250);
  lcd.clear();
  lcd.print("Waiting for pi");
  lcd.setCursor(0, 1);
  lcd.print("to boot ..");
  delay(250);
  lcd.clear();
  lcd.print("Waiting for pi");
  lcd.setCursor(0, 1);
  lcd.print("to boot  .");
  delay(250);
  lcd.clear();
  lcd.print("Waiting for pi");
  lcd.setCursor(0, 1);
  lcd.print("to boot   ");
  delay(250);
}



