#define LED 13

long current,past;
bool on = false;

void setup() {
  current = millis();
  past = current;
  pinMode(LED,OUTPUT);
}

void loop() {
  current = millis();
  if(current - past >= 1000){
    on = !on;
    digitalWrite(LED,on);
    past = current;
  }
  digitalWrite(14,HIGH);

}
