#define LED 6
#define SWITCH 2


int prevMillis = 0;
int currentMillis;


void setup() {
    pinMode(LED, OUTPUT);
    pinMode(SWITCH, INPUT_PULLUP);
     
}

void loop() {
  currentMillis = millis();
  if( digitalRead(SWITCH) == LOW){
    currentMillis = millis();
    digitalWrite(LED, HIGH);
  }
  
  if((currentMillis - prevMillis) == 3000){
    digitalWrite(LED, LOW);
    prevMillis = currentMillis;
  }

  
}
