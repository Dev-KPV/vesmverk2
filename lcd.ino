# KARL PHILIP VALLESTEROL  
# kóðinn // include the library code: #include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {

// set up the LCD's number of columns and rows:
lcd.begin(16, 2);

// Print a message to the LCD.
lcd.print("Karl Philip");
lcd.setCursor(0, 1);
lcd.print("23/03/2020");
delay(1000);
}

void loop() {

// scroll 13 positions (string length) to the left
// to move it offscreen left:
for (int positionCounter = 0; positionCounter < 13; positionCounter++) {
  // scroll one position left:
  lcd.scrollDisplayLeft();
  // wait a bit:
  delay(150);
}

// scroll 29 positions (string length + display length) to the right
// to move it offscreen right:
for (int positionCounter = 0; positionCounter < 29; positionCounter++) {
  // scroll one position right:
  lcd.scrollDisplayRight();
  // wait a bit:
  delay(150);
}

// scroll 16 positions (display length + string length) to the left
// to move it back to center:
for (int positionCounter = 0; positionCounter < 16; positionCounter++) {
  // scroll one position left:
  lcd.scrollDisplayLeft();
  // wait a bit:
  delay(150);
}

// delay at the end of the full loop:
delay(1000);
}
