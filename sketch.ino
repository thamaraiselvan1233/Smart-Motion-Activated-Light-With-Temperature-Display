#include <LiquidCrystal_I2C.h>

const int pirPin = 2;
const int ledPin = 7;
const int tempPin = A0;

unsigned long lastMotionTime = 0;

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);

  Serial.begin(9600);

  lcd.init();          
  lcd.backlight();
  lcd.clear();
}

void loop() {
  int motion = digitalRead(pirPin);
  int tempValue = analogRead(tempPin);

  float voltage = tempValue * 5.0 / 1023.0;
  float tempC = voltage * 100;   

  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(tempC, 1); 
  lcd.print(" C   ");

  if (motion == HIGH) {
    digitalWrite(ledPin, HIGH);
    lastMotionTime = millis();

    lcd.setCursor(0, 1);
    lcd.print("Motion Detected ");
  } else {
    if (millis() - lastMotionTime > 10000) {
      digitalWrite(ledPin, LOW);

      lcd.setCursor(0, 1);
      lcd.print("No Motion       ");
    }
  }

  delay(500);
}
