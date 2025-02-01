
const int ledPin =13;  
int LED = LOW;  

unsigned long previousMillis = 0; 

const long interval = 1000;

void setup() {
  // set the digital pin as output:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
  previousMillis = currentMillis;
    if (LED == LOW) {
    LED = HIGH;
    } 
    
    else {
    LED = LOW;
    }
    digitalWrite(ledPin,LED);
  }
}
