
#define SERVO_PIN 9
void setup() {
 pinMode(SERVO_PIN,OUTPUT);

}

void loop() {
  servo_zero();
  delay(1000);
  servo_ninty();
  delay(1000);
servo_neg_ninty();
delay(1000);
}
void servo_zero(){
digitalWrite(SERVO_PIN,HIGH);
delayMicroseconds(1500);
digitalWrite(SERVO_PIN,LOW);
delayMicroseconds(18500);

}
void servo_ninty(){
  digitalWrite(SERVO_PIN,HIGH);
delayMicroseconds(2000);
digitalWrite(SERVO_PIN,LOW);
delayMicroseconds(18000);
}
void servo_neg_ninty(){
  digitalWrite(SERVO_PIN,HIGH);
delayMicroseconds(1000);
digitalWrite(SERVO_PIN,LOW);
delayMicroseconds(19000);
}