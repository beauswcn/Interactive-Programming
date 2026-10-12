const int potPin = A0;
const int ledPin = 9;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int potValue = analogRead(potPin);
  e
  int brightness = map(potValue, 0, 1023, 255, 0);
  
  analogWrite(ledPin, brightness);
}