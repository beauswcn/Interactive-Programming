const int potPin = A0;
const int ledPin = 9;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int potValue = analogRead(potPin);
  int brightness;

  if (potValue < 200) {
    brightness = 0;   
  } else if (potValue <= 800) {
    brightness = map(potValue, 200, 800, 0, 255); 
  } else {
    brightness = 255; 
  }

  analogWrite(ledPin, brightness);
}