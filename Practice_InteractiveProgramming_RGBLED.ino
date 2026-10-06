if (ledcolor == 0){
  currentcolor="LED off";
  digitalWrite(RledPin, HIGH);
  digitalWrite(GledPin, HIGH);
  digitalWrite(BledPin, HIGH);
}

else if (ledcolor == 1) {
  // RED
  currentcolor="Red";
  digitalWrite(RledPin, LOW);
  digitalWrite(GledPin, HIGH);
  digitalWrite(BledPin, HIGH);

  delay(1000);
  digitalWrite(RledPin, HIGH);
  digitalWrite(GledPin, HIGH);
  digitalWrite(BledPin, HIGH);
  delay(1000);
}

else if(ledcolor == 2) {
  //Green
  currentcolor="Green";
  digitalWrite(RledPin, HIGH);
  digitalWrite(GledPin, LOW);
  digitalWrite(BledPin, HIGH);

  delay(1000);
  digitalWrite(RledPin, HIGH);
  digitalWrite(GledPin, HIGH);
  digitalWrite(BledPin, HIGH);
  delay(1000);
}

else if(ledcolor == 3){
  currentcolor="Blue";
  digitalWrite(RledPin, HIGH);
  digitalWrite(GledPin, HIGH);
  digitalWrite(BledPin, LOW);

  delay(1000);
  digitalWrite(RledPin, HIGH);
  digitalWrite(GledPin, HIGH);
  digitalWrite(BledPin, HIGH);
  delay(1000);
}

//yellow
else if(ledcolor == 4){
  currentcolor="Yellow";
  digitalWrite(RledPin, LOW);
  digitalWrite(GledPin, LOW);
  digitalWrite(BledPin, HIGH);

  delay(1000);
  digitalWrite(RledPin, HIGH);
  digitalWrite(GledPin, HIGH);
  digitalWrite(BledPin, HIGH);
  delay(1000);
}

//purple
else if(ledcolor == 5){
  currentcolor="Purple";
  digitalWrite(RledPin, LOW);
  digitalWrite(GledPin, HIGH);
  digitalWrite(BledPin, LOW);

  delay(1000);
  digitalWrite(RledPin, HIGH);
  digitalWrite(GledPin, HIGH);
  digitalWrite(BledPin, HIGH);
  delay(1000);
}

else if(ledcolor == 6){
  currentcolor="Cyan";
  digitalWrite(RledPin, HIGH);
  digitalWrite(GledPin, LOW);
  digitalWrite(BledPin, LOW);

  delay(1000);
  digitalWrite(RledPin, HIGH);
  digitalWrite(GledPin, HIGH);
  digitalWrite(BledPin, HIGH);
  delay(1000);
}

//white
else if(ledcolor == 7){
  currentcolor="White";
  digitalWrite(RledPin, LOW);
  digitalWrite(GledPin, LOW);
  digitalWrite(BledPin, LOW);

  delay(1000);
  digitalWrite(RledPin, HIGH);
  digitalWrite(GledPin, HIGH);
  digitalWrite(BledPin, HIGH);
  delay(1000);
}void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
