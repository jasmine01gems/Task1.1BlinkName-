// LED is connected to digital pin 13  
const int ledPin = 13;  
// Push button is connected to digital pin 2 
const int buttonPin = 2;   
  
int buttonState = 0;  // it will store the state of push button 
int sequenceIndex = 0;  // to keep track of the Morse code sequence  
  
void setup() {  
  pinMode(ledPin, OUTPUT);  
  pinMode(buttonPin, INPUT);  
}  
  
void loop() {  
  buttonState = digitalRead(buttonPin);  
  if (buttonState == HIGH) {  
  sequenceIndex = 0;  // it will reset the sequence index of the morse code when the button is pressed  
  delay(50);  
  }  
  
  if (sequenceIndex < strlen("JASMEeN")) {  
  blinkMorseName("JASMEeN"[sequenceIndex]);  
  sequenceIndex++;  
  delay(400);  // to have 400ms delay between letters  
  }  
}  
  
void blinkMorseName(char c) {  
  switch (c) {  
  case 'J':  
  blinkMorseDot();  
  blinkMorseDash();  
  blinkMorseDash();  
  blinkMorseDash(); 
  break;  
  case 'A':  
  blinkMorseDot();    
  blinkMorseDash(); 
  break;  
  case 'S':  
  blinkMorseDot();    
  blinkMorseDot();    
  blinkMorseDot();    
  break;  
  case 'M':  
  blinkMorseDash(); 
  blinkMorseDash();  
  break;  
  case 'E':  
  blinkMorseDot();    
  break;  
  case 'e':  
  blinkMorseDot();    
  break;  
  case 'N':  
  blinkMorseDash();  
  blinkMorseDot();  ;  
  break;  
  default:  
  break;  
  }  
}  
  
void blinkMorseDot() {  
  digitalWrite(ledPin, HIGH);  
  delay(100);  
  digitalWrite(ledPin, LOW);  
  delay(100);  
}  
  
void blinkMorseDash() {  
  digitalWrite(ledPin, HIGH);  
  delay(300);  
  digitalWrite(ledPin, LOW);  
  delay(300);  
}
