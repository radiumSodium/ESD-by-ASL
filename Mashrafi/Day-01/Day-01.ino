
#define LED 13

unsigned long int prevMillis = 0;
bool ledstate = LOW;
int interval = 1000;

void setup() {
  // put your setup code here, to run once:
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
