// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

// make some custom characters:
byte heart[8] = {
  0b00000,
  0b01010,
  0b11111,
  0b11111,
  0b11111,
  0b01110,
  0b00100,
  0b00000
};
byte lightening[8] = {
  0b00001,
  0b00010,
  0b00100,
  0b01110,
  0b00010,
  0b00100,
  0b01000,
  0b10000
};
 byte star[8] = {
  0b10001,
  0b01010,
  0b00110,
  0b00110,
  0b11111,
  0b00110,
  0b01001,
  0b10001
};

void setup() {
  // put your setup code here, to run once:
  // initialize LCD and set up the number of columns and rows:
  lcd.begin(16, 2);

  // create a new character
  lcd.createChar(0, heart);
  lcd.createChar(1, lightening);
  lcd.createChar(2, star);

   // set the cursor to the top left
  lcd.setCursor(0, 0);

  lcd.write(byte(0)); // when calling lcd.write() '0' must be cast as a byte
  lcd.setCursor(15, 0);
  lcd.write(byte(1));
  lcd.setCursor(6, 0);
  lcd.write(byte(2));
}

void loop() {
  // put your main code here, to run repeatedly:

}
