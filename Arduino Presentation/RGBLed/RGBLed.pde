/*
  RGBLED
  Drives an RGB LED, blinking the colors in series with increasing speed
	until the colors begin to mix.

  This code is in the public domain.
 */
int Red = 13;
int Blue = 12;
int Green = 11;

void setup() {
  // initialize the digital pin as an output.
  // Pin 13 has an LED connected on most Arduino boards:
  pinMode(Red, OUTPUT);     
  pinMode(Green, OUTPUT);
  pinMode(Blue, OUTPUT);
}

void loop() {
  int x = -1;
  int Max = 100;
  for(int i = Max; i > -1; i = i + x)
  {
    digitalWrite(Red, HIGH);  
    delay(i);              
    digitalWrite(Red, LOW);   
    digitalWrite(Green, HIGH);
    delay(i);              
    digitalWrite(Green, LOW);
    digitalWrite(Blue, HIGH);
    delay(i);
    digitalWrite(Blue, LOW);
    delay(i);
    if(i == 0) x = 1;
    if(i == Max) x = -1;
  }
}
