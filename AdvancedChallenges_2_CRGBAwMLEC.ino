const int RledPin = 9;
const int GledPin = 10;
const int BledPin = 11;

byte hue = 0; 

void setup() {
  pinMode(RledPin, OUTPUT);
  pinMode(GledPin, OUTPUT);
  pinMode(BledPin, OUTPUT);
}

void loop() {
  showHueColor(hue);
  
  hue++; 
  delay(20); 
}

void showHueColor(byte WheelPos) {
  byte r, g, b;

  if (WheelPos < 85) {
    r = 255 - WheelPos * 3;
    g = WheelPos * 3;
    b = 0;
  } else if (WheelPos < 170) {
    WheelPos -= 85;
    r = 0;
    g = 255 - WheelPos * 3;
    b = WheelPos * 3;
  } else {
    WheelPos -= 170;
    r = WheelPos * 3;
    g = 0;
    b = 255 - WheelPos * 3;
  }

  analogWrite(RledPin, 255 - r);
  analogWrite(GledPin, 255 - g);
  analogWrite(BledPin, 255 - b);
}