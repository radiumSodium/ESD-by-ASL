#define LED 13

unsigned long int prevMillis = 0;
bool ledstate = LOW;
int interval = 1000;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  unsigned long int currentMillis = millis();
  if((currentMillis - prevMillis) >= interval){
    prevMillis = currentMillis;
    ledstate = !ledstate;
    digitalWrite(LED, ledstate);
  }
}
