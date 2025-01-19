/*
  author : Sojibul Islam Rana
  program: LED blink with millis()
  date   : 16-01-2005
*/

#define ledpin 13;
const unsigned long eventInterval = 1000;
unsigned long previousTime = 0;

void setup() {
  Serial.begin(9600); 
  pinMode(ledpin, OUTPUT);
}

void loop() {
  unsigned long currentTime = millis();

  if (currentTime - previousTime >= eventInterval){
    digitalWrite(ledpin, !digitalRead(ledpin));
    previousTime = currentTime;
  }
}
