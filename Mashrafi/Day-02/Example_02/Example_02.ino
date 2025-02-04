#define led 13
#define in 2
int state;

void setup() {
  // put your setup code here, to run once:
  pinMode(in, INPUT);
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);

}

void loop() {
  
    state=digitalRead(in);
    if(state==LOW){
      digitalWrite(led, HIGH);
    }else{
      digitalWrite(led, LOW);
      }

}
