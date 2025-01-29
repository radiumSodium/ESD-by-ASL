//PULL UP 
void setup(){
pinMode(2,INPUT);
pinMode(13,OUTPUT);
}
void loop(){
int position = digitalRead(2);
if(position == LOW){
  digitalWrite(13,HIGH);
}
else{
   digitalWrite(13,LOW);
}
}