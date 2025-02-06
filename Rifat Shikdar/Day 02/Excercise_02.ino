#define LED 13
#define SWITCH 2 
void setup() {
pinMode(SWITCH,INPUT);
pinMode(LED,OUTPUT);
}

void loop() {
  if(digitalRead(SWITCH)==LOW){
    digitalWrite(LED, HIGH);  
    }            
 else{
    digitalWrite(LED, LOW);   
     }                   
}


