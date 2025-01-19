/*
  author : Sojibul Islam Rana
  program: Print "Hello, Tushar Vai!!!" every second
  date   : 16-01-2005
*/

const unsigned long eventInterval = 1000;
unsigned long previousTime = 0;

void setup() {
  Serial.begin(9600); 
}

void loop() {
  unsigned long currentTime = millis();

  if (currentTime - previousTime >= eventInterval){
    Serial.println("Hello, Tushar Vai!!!");
    previousTime = currentTime;
  }
}


/* 
  unsigned long: because the millis will count 16000 in a second
  normal variable like int which is 2 bytes will overflow soon.

  currentTime holds the current value of the counter. if the time
  time difference is greater/equal of eventInterval which is 1000
  or 1 second println() will print whatever inside of it. then
  update the previousTime with currentTime 
*/