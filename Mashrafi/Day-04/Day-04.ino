//Assignment: When a button is clicked an LED will turn on for 3 seconds.

#define led 13
#define in 2
long button_time=0;
int input_state;

void setup(){
  //Here pin 2 and pin 13 are used.
  pinMode(led, OUTPUT);
  pinMode(in, INPUT);
  digitalWrite(led, LOW);
  
}

void loop(){
  //Taking input signal of the push button.
  input_state= digitalRead(in);

  //LED on when the button is clicked.
  if(input_state==HIGH){
    button_time= millis();
    digitalWrite(led, HIGH);
  }
  //Timing for 3 seconds.
  if(millis()-button_time >=3000){
    digitalWrite(led, LOW);
  }
  
}
