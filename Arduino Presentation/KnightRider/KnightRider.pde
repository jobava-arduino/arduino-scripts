/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */

int thirteenPin = 13;
int twelvePin = 12;                  // Red LED connected to digital pin 12
int elevenPin = 11;                // Green LED connected to digital pin 11
int tenPin = 10;
int ninePin = 9;
int eightPin = 8;

void setup()                      // run once, when the sketch starts
{
  pinMode(thirteenPin, OUTPUT);
  pinMode(twelvePin, OUTPUT);        // sets the digital pin as output
  pinMode(elevenPin, OUTPUT);      // sets the digital pin as output
  pinMode(tenPin, OUTPUT);       // sets the digital pin as output
  pinMode(ninePin, OUTPUT);
  pinMode(eightPin, OUTPUT);
}

void loop()                       // run over and over again
{
  digitalWrite(thirteenPin, HIGH);     // sets the Red LED on
  delay(25);
  digitalWrite(thirteenPin, LOW);
  delay(25);
  digitalWrite(twelvePin, HIGH);   // sets the Green LED on
  delay(25);
  digitalWrite(twelvePin, LOW);
  delay(25);
  digitalWrite(elevenPin, HIGH);    // sets the Blue LED on
  delay(25);                     // waits for half a second
  digitalWrite(elevenPin, LOW);      // sets the Red LED off
  delay(25);
  digitalWrite(tenPin, HIGH);
  delay(25);
  digitalWrite(tenPin, LOW);
  delay(25);
  digitalWrite(ninePin, HIGH);
  delay(25);
  digitalWrite(ninePin, LOW);
  delay(25);
  digitalWrite(eightPin, HIGH);
  delay(25);
  digitalWrite(eightPin, LOW);
  delay(25);
  digitalWrite(ninePin, HIGH);
  delay(25);
  digitalWrite(ninePin, LOW);
  delay(25);
  digitalWrite(tenPin, HIGH);
  delay(25);
  digitalWrite(tenPin, LOW);
  delay(25);
  digitalWrite(elevenPin, HIGH);
  delay(25);
  digitalWrite(elevenPin, LOW);
  delay(25);
  digitalWrite(twelvePin, HIGH);
  delay(25);
  digitalWrite(twelvePin, LOW);
  delay(25);
}
