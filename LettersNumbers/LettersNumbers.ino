void setup() {               
  pinMode(0, OUTPUT);  
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  digitalWrite(0, 1);
  delay(100);
  digitalWrite(1, 1);
  delay(100);
  digitalWrite(2, 1);
  delay(100);
  digitalWrite(3, 1);
  delay(100);
  digitalWrite(4, 1);
  delay(100);
  digitalWrite(6, 1);
  delay(100);
  //done powerup
}

// 1 - DIP [2,5]
// 2 - DIP [1,2,3,4,8]
// 3 - DIP [1,2,4,5,8]
// 4 - DIP [2,5,7,8]
// 5 - DIP [1,4,5,7,8]
// 6 - DIP [1,3,4,5,7,8]
// 7 - DIP [1,2,5]
// 8 - DIP [1,2,3,4,5,7,8]
// 9 - DIP [1,2,5,7,8]
// 0 - DIP [1,2,3,4,5,7]
// A - DIP [1,2,3,5,7,8]
// a - DIP [1,2,3,4,5,8]
// C - DIP [1,3,4,7]
// E - DIP [1,3,4,7,8]
// F - DIP [1,3,7,8]
// G - DIP [1,3,4,5,7]
// H - DIP [2,3,5,7,8]
// J - DIP [2,3,4,5]
// L - DIP [3,4,7]
// P - DIP [1,2,3,7,8]
// U - DIP [2,3,4,5,7]
// . - DIP [6]

// ALL ON
//  digitalWrite(0, 1);
//  digitalWrite(1, 1);
//  digitalWrite(2, 1);
//  digitalWrite(3, 1);
//  digitalWrite(4, 1);
//  digitalWrite(5, 1);
//  digitalWrite(6, 1);
//  digitalWrite(7, 1);

void loop() {
  // print h 12467
  digitalWrite(0, 0);
  digitalWrite(1, 1);
  digitalWrite(2, 1);
  digitalWrite(3, 0);
  digitalWrite(4, 1);
  digitalWrite(5, 0);
  digitalWrite(6, 1);
  digitalWrite(7, 1);
  delay(1000);
  // I 14
  digitalWrite(0, 0);
  digitalWrite(1, 1);
  digitalWrite(2, 0);
  digitalWrite(3, 0);
  digitalWrite(4, 1);
  digitalWrite(5, 0);
  digitalWrite(6, 0);
  digitalWrite(7, 0);
  delay(1000);
}
