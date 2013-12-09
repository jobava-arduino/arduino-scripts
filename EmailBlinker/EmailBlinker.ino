// Email Blinker
// Tom Swartz; 2013

int ledPin = 13;
int val = 0;
int wait = 150;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    val = Serial.read();
    if (val > '0' && val <= '9') {
      Serial.println(val);
      val = val - '0';
      for (int i=0; i<val; i++) {
        digitalWrite(ledPin, HIGH);
        delay(wait);
        digitalWrite(ledPin, LOW);
        delay(wait);
      }
      delay(1500);
    }
  }
}
