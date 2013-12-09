const int TxPin = 6;
char letter;
String text="";

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
  delay(5000);
  lcd.write(17);                 // Turn backlight on
  lcd.write(12);                 // Clear             
  delay(5);                      // Required delay
  lcd.print("   Connected!");  // First line
  lcd.write(13);                 // Form feed
  lcd.print(" Starting Email");   // Second line
  delay(3000);                   // Wait 3 seconds
}

void loop() {
  lcd.write(12);
  delay(5);
  lcd.write(12);
  delay(5);
  lcd.print("Unread: ");
  lcd.write(13);
  delay(5);
  lcd.print("Tom Swartz");
  for (int i = 0; i <= 20; i++) {
    lcd.write(138);
    lcd.print(i);
    delay(1500);
  }
  
}
