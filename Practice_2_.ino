void setup() {
  // Initialize pin 6 as an output
  pinMode(LED_BUILTIN, OUTPUT);
}

//the loop function runs over and over
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(5000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);

}