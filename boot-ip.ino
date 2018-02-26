//import code to interface with the LCD
#include <LiquidCrystal.h>
#include <String.h>

//initialize LiquidCrustal with raspin numbers
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
boolean recieved;
void setup() {
  //start serial communications with computer
  Serial.begin(9600);
  //tell LiquidCrystal the size of the LCD
  lcd.begin(16, 2);
  //print loading message
  lcd.print("Waiting for");
  lcd.setCursor(0, 1);
  lcd.print("raspi.");
  recieved = false;
}

void loop() {
  //if the computer recoginized us, print the ip
  if (Serial.available() > 0) {
    recieved = true;
    Serial.print("connected");
    delay(1);
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("ip:");
    lcd.setCursor(0, 1);
    String ip = Serial.readString();
    Serial.println(ip);
    lcd.print(ip);
  }
  //otherwise, display loading animation
  else if(recieved == false){
    load();
  }
}

//loading animation
void load() {
  lcd.clear();
  lcd.print("Waiting for");
  lcd.setCursor(0, 1);
  lcd.print("raspi.");
  delay(250);
  lcd.clear();
  lcd.print("Waiting for");
  lcd.setCursor(0, 1);
  lcd.print("raspi..");
  delay(250);
  lcd.clear();
  lcd.print("Waiting for");
  lcd.setCursor(0, 1);
  lcd.print("raspi...");
  delay(250);
  lcd.clear();
  lcd.print("Waiting for");
  lcd.setCursor(0, 1);
  lcd.print("raspi ..");
  delay(250);
  lcd.clear();
  lcd.print("Waiting for");
  lcd.setCursor(0, 1);
  lcd.print("raspi  .");
  delay(250);
  lcd.clear();
  lcd.print("Waiting for");
  lcd.setCursor(0, 1);
  lcd.print("raspi   ");
  delay(250);
}



