#define LED B01000000 //pin 6
#define SWITCH B00000100 //pin 2

void setup() {
  // put your setup code here, to run once:
  DDRD &= !SWITCH;
  PORTD |= SWITCH;  //sets switch to high

  DDRD |= LED;

}

void loop() {
  // put your main code here, to run repeatedly:
  if(PIND & SWITCH){  //check if switch is high, switch is high when button value is low
    PORTD &= !LED;  //sets led to low
  }
  else PORTD |= LED; //sets led to high.
  //led will remain on when button is pressed
}
