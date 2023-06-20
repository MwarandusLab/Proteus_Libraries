#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

int IRpin = A0;

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(20, 4);
  // Print a message to the LCD.
  lcd.setCursor(1,0);
  lcd.print("www.TheEngineering");
  lcd.setCursor(4,1);
  lcd.print("Projects.com");
}

void loop() {

  float volts = analogRead(IRpin)*0.0048828125;   
  float distance = 65*pow(volts, -1.10); 
  lcd.setCursor(4,2);  
  lcd.print(distance);     
  lcd.print(" cm");
  delay(1000);

//  sensorValue = analogRead(sensorPin);
//  lcd.setCursor(4,2);
//  lcd.print(sensorValue);
//  delay(1000);
  
}

