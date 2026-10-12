const int RledPin = 9;
const int GledPin = 10;
const int BledPin = 11;

int brightness = 0;
int fadeAmount = 5;

int targetR = 255;
int targetG = 0;
int targetB = 0;

void setup() {
  pinMode(RledPin, OUTPUT);
  pinMode(GledPin, OUTPUT);
  pinMode(BledPin, OUTPUT);
  
  randomSeed(analogRead(0));
}

void loop() {
  analogWrite(RledPin, 255 - (targetR * brightness / 255));
  analogWrite(GledPin, 255 - (targetG * brightness / 255));
  analogWrite(BledPin, 255 - (targetB * brightness / 255));

  brightness += fadeAmount;

  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;

    if (brightness <= 0) {
      targetR = random(0, 256);
      targetG = random(0, 256);
      targetB = random(0, 256);
    }
  }

  delay(30);
}