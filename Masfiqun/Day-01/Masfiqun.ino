 int ledPin = 7;           
unsigned long previousMillis = 0;
const long interval = 1000;     

void setup() {
  pinMode(ledPin, OUTPUT);      
}

void loop() {
  if (millis() - previousMillis >= interval) {
    previousMillis = millis(); 
    digitalWrite(ledPin, !digitalRead(ledPin)); 
  }
}
