const int TxPin = 6;

#include <SoftwareSerial.h>
SoftwareSerial lcd = SoftwareSerial(255, TxPin);

void setup() {
    
  pinMode(TxPin, OUTPUT);
  digitalWrite(TxPin, HIGH);
  lcd.begin(9600);
  Serial.begin(9600);
  delay(100);
  lcd.write(22);
  lcd.write(17);
  lcd.write(12);
  lcd.write(12);
  lcd.print("Status: Waiting");
  delay(2000);
  lcd.write(136);
  lcd.print("OK!    ");
  lcd.write(13);
  lcd.write("Connecting");
  delay(1000);
  lcd.write(".");
  delay(1000);
  lcd.write(".");
  delay(1000);
  lcd.write(".");
  delay(1000);
  lcd.write(".");
  delay(500);
  lcd.write(".");
  delay(5000);
  lcd.write(12);
  delay(5);
  lcd.write(12);
  delay(5);
  lcd.print("Penn Manor Email");
  lcd.print("Unread: ");
}

void loop() {
  if (Serial.available()) {
    int val = Serial.read();
    if (val > '0' && val <= '9') {
      lcd.write(156);
      lcd.write(17);
      val = val - '0';
      lcd.print(val);
    }
    if (val == '0') {
      lcd.write(156);
      lcd.print("0");
      delay(1500);
      lcd.write(18);
    }
    delay(1500);
  }
}
