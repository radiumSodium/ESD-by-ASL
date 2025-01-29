#define LED 6
#define SWITCH 2


int prevMillis;


void setup() {
    pinMode(LED, OUTPUT);
    pinMode(SWITCH, INPUT_PULLUP);
     
}

void loop() {
  if( digitalRead(SWITCH) == LOW){
    digitalWrite(LED, HIGH);
    prevMillis = millis();
  }
  
  if((millis() - prevMillis) == 3000){
    digitalWrite(LED, LOW);
  }

  
}
