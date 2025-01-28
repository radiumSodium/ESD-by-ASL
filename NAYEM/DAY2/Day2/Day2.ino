
void setup() {
  //PORTD PIN 6 -OUTPUT
  DDRD |= B01000000;
  //PORTD PIN 5 - INPUT
  DDRD &= !B00100000;

}

void loop() {

  if(PIND & B00100000)
  {
    PORTD &= !B01000000; // LOW
  }
  else
    PORTD |= B01000000; // HIGH
  
}
