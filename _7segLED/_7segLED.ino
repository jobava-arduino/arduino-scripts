#define PHOTO 0

void setup()
{
  pinMode(0, OUTPUT); // -> Anode A, bit 0 in the definitions
  pinMode(1, OUTPUT); // -> Anode B, bit 1
  pinMode(2, OUTPUT); // -> Anode C, bit 2
  pinMode(3, OUTPUT); // -> Anode D, bit 3
  pinMode(4, OUTPUT); // -> Anode E, bit 4
  pinMode(5, OUTPUT); // -> Anode F, bit 5
  pinMode(6, OUTPUT); // -> Anode G, bit 6
}


// encode the on/off state of the LED segments for the characters 
// '0' to '9' into the bits of the bytes
const byte numDef[10] = { 63, 6, 91, 79, 102, 109, 124, 7, 127, 103 };

// keep track of the old value
int oldVal = -1;

void loop()
{
  // grab the input from the photoresistor
  int input = analogRead(PHOTO);

  // convert the input range (0-1023) to the range we can 
  // display on the LED (0-9)
  int displayVal = map(input, 0, 1023, 0, 9);

  // if the value has changed, then update the LED and hold for a 
  // brief moment to help with the debouncing.
  if (displayVal != oldVal)
  {
    setSegments( numDef[displayVal] );
    delay(250);
  }
}


void setSegments(byte segments)
{
  // for each of the segments of the LED
  for (int s = 0; s < 7; s++)
  {
    int bitVal = bitRead( segments, s ); // grab the bit 
    digitalWrite(s, bitVal); // set the segment
  }
}
