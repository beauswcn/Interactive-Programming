const int potPin = A0;
const int ledPin = 9;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int potValue = analogRead(potPin);

  float normalized = potValue / 1023.0;

  int brightness = pow(normalized, 2) * 255;

  analogWrite(ledPin, brightness);
}