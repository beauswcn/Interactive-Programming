23void setup() {
  // initialize digital pin as an output.
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  // red
  digitalWrite(3, LOW);  
  digitalWrite(4, HIGH);  
  digitalWrite(5, HIGH); 
  delay(1000);
   // turn off
  digitalWrite(3, HIGH);   
  digitalWrite(4, HIGH);  
  digitalWrite(5, HIGH);  
  delay(1000); 7
  // green
  digitalWrite(3, HIGH);  
  digitalWrite(4, LOW);  
  digitalWrite(5, HIGH); 
  delay(1000) ;
  // turn off
  digitalWrite(3, HIGH);   
  digitalWrite(4, HIGH);  
  digitalWrite(5, HIGH);  
  delay(1000); 
  // blue
  digitalWrite(3, HIGH);   
  digitalWrite(4, HIGH);  
  digitalWrite(5, LOW);  
  delay(1000) ;
  // turn off
digitalWrite(3, HIGH);   
  digitalWrite(4, HIGH);  
  digitalWrite(5, HIGH);  
  delay(1000); 
}
