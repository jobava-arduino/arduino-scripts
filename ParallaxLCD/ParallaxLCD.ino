const int TxPin = 6;

#include <SoftwareSerial.h>
SoftwareSerial lcd = SoftwareSerial(255, TxPin);

void setup() {
    
  pinMode(TxPin, OUTPUT);
  digitalWrite(TxPin, HIGH);
  
  lcd.begin(9600);
  delay(100);
}

void loop() {
  lcd.write(17);                 // Turn backlight on
  lcd.write(12);                 // Clear             
  delay(5);                      // Required delay
  lcd.print("Hello, world...");  // First line
  lcd.write(13);                 // Form feed
  lcd.print("from PennManor");   // Second line
  delay(3000);                   // Wait 3 seconds
  lcd.write(18);                 // Turn backlight off
  delay(1000);
}
