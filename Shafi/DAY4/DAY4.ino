#define LED 6
#define SWITCH 2


int prevMillis;
int currentMillis;


void setup() {
    pinMode(LED, OUTPUT);
    pinMode(SWITCH, INPUT_PULLUP);
     
}

void loop() {
  currentMillis = millis();
  if( digitalRead(SWITCH) == LOW){
    digitalWrite(LED, HIGH);
    prevMillis = millis();
  }
  
  if((currentMillis - prevMillis) == 3000){
    digitalWrite(LED, LOW);
  }

  
}
