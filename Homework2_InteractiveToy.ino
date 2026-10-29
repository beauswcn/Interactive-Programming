// Define Pins
const int buttonPin = 2;               // Pushbutton signal pin
const int RledPin = 9;                 // Red pin connected to D9
const int GledPin = 10;                // Green pin connected to D10
const int BledPin = 11;                // Blue pin connected to D11

// Mood Variables
int mood = 0;                          
const int neutralMood = 10;            

// Button State Variables
int buttonState = 0;                   
bool ButtonPressed = false;            

// Timer Variables
unsigned long touchedTimer = 0;        
unsigned long reducedTimer = 0;        
const long unTouchInterval = 5000;     // 5 seconds before mood drops
const long reducedInterval = 1000;     // Drop 1 point every 1 second

void setup() {
  pinMode(buttonPin, INPUT);           
  pinMode(RledPin, OUTPUT);            
  pinMode(GledPin, OUTPUT);            
  pinMode(BledPin, OUTPUT);            
  
  // Initialize the mood state to neutral
  mood = neutralMood;                  
}

void loop() {
  showLEDState(mood);                  
  
  // Read the button state
  buttonState = digitalRead(buttonPin); 
  
  // If the button is clicked (petting the toy)
  if(buttonState == HIGH && !ButtonPressed){ 
    mood = mood + 1;                   
    if(mood > 20) mood = 20;           
    
    touchedTimer = millis();           
    ButtonPressed = true;              
  }
  
  // Reset button press state when released
  if(buttonState == LOW && ButtonPressed){  
    ButtonPressed = false;             
  }
  
  // Check if untouched for more than 5 seconds
  unsigned long currentTimer = millis();     
  if(currentTimer - touchedTimer > unTouchInterval){ 
    if(currentTimer - reducedTimer > reducedInterval){ 
      mood = mood - 1;                 
      if(mood < 0) mood = 0;           
      reducedTimer = currentTimer;     
    }
  }
}

// Function tailored for Common Anode (V-R-G-B) LED Module
void showLEDState(int state){          
  float brightnessInterval = 255 / 10.0; 
  
  // Happy spectrum (10 to 20 points) -> Shifts from Green to Blue
  if(state >= neutralMood){            
    int redVal = 255; // Red OFF
    int greenVal = brightnessInterval * (state - neutralMood); // Green fades out
    int blueVal = 255 - (brightnessInterval * (state - neutralMood)); // Blue fades in
    
    analogWrite(RledPin, redVal);           
    analogWrite(GledPin, greenVal); 
    analogWrite(BledPin, blueVal);       
  }
  // Sad spectrum (0 to 9 points) -> Shifts from Red to Green
  else{                                
    int redVal = 255 - (brightnessInterval * (neutralMood - state)); // Red fades in
    int greenVal = brightnessInterval * (neutralMood - state); // Green fades out
    int blueVal = 255; // Blue OFF
    
    analogWrite(RledPin, redVal);       
    analogWrite(GledPin, greenVal); 
    analogWrite(BledPin, blueVal);           
  }
}