#define LED 13
#define SWITCH 6

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(SWITCH, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(SWITCH) == HIGH){
    digitalWrite(LED, LOW);
  }
  else{
    digitalWrite(LED, HIGH);
  }
}
