

void setup() {
  //objective is to set pin 13 as output and pin 2 as input for button
    DDRB |= B00100000;
    DDRD &= !B00000100;
  
}

void loop() {

    if(!(PIND & B00000100))//checks if the btn is low
      {
        PORTB |= B00010000;//do the pin high
      }
    else{
        PORTB &= !B00010000;//do the pin low
      }
}

