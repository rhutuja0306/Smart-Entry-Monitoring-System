#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Create LCD object (address 0x27 is common, change if needed)
LiquidCrystal_I2C lcd(0x27, 16, 2);

// Define IR sensor pins
const int entryIR = 5; // D2
const int exitIR = 4;  // D4

int peopleCount = 0;
bool entryState = HIGH;
bool exitState = HIGH;

void setup() {
  pinMode(entryIR, INPUT_PULLUP);
  pinMode(exitIR, INPUT_PULLUP);

  lcd.begin();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("People in Room:");
  lcd.setCursor(0, 1);
  lcd.print(peopleCount);
}

void loop() {
  // Read sensors
  bool entryRead = digitalRead(entryIR);
  bool exitRead = digitalRead(exitIR);


  // Check for person entering
  if (entryRead == LOW && entryState == HIGH) {
    peopleCount++;
    updateLCD();
    delay(500);  // debounce
  }
  entryState = entryRead;

  // Check for person exiting
  if (exitRead == LOW && exitState == HIGH) {
    if (peopleCount > 0) peopleCount--;
    updateLCD();
    delay(500);  // debounce
  }
  exitState = exitRead;
}

void updateLCD() {
  lcd.setCursor(0, 1);
  lcd.print("                "); // clear previous value
  lcd.setCursor(0, 1);
  lcd.print(peopleCount);
}