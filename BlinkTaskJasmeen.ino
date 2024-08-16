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
  blinkMorseCode("JASMEeN"[sequenceIndex]);  
  sequenceIndex++;  
  delay(400);  // to have 400ms delay between letters  
  }  
}  
  
void blinkMorseCode(char c) {  
  switch (c) {  
  case 'J':  
  blinkDot();  
  blinkDash();  
  blinkDash();  
  blinkDash();  
  break;  
  case 'A':  
  blinkDot();  
  blinkDash();  
  break;  
  case 'S':  
  blinkDot();  
  blinkDot();  
  blinkDot();  
  break;  
  case 'M':  
  blinkDash();  
  blinkDash();  
  break;  
  case 'E':  
  blinkDot();  
  break;  
  case 'e':  
  blinkDot();  
  break;  
  case 'N':  
  blinkDash();  
  blinkDot();  
  break;  
  default:  
  break;  
  }  
}  
  
void blinkDot() {  
  digitalWrite(ledPin, HIGH);  
  delay(100);  
  digitalWrite(ledPin, LOW);  
  delay(100);  
}  
  
void blinkDash() {  
  digitalWrite(ledPin, HIGH);  
  delay(300);  
  digitalWrite(ledPin, LOW);  
  delay(300);  
}
