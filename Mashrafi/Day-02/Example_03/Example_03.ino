

void setup() {
  //taking pin no 2 as an input and pin no 13 as an output
    DDRB= B00100000;
    DDRD= B00000100;
  
}

void loop() {

    if(PIND==!B00000100){
        PORTB= B00010000;
      }else{
        PORTB= !B00010000;
        }
}
