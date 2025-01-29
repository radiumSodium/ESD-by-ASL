 //Program: Taking input from pin 2, and trun led on 13

void setup() {
  DDRD &= !(1 << PD2);   // pin 2 input 
  PORTD |= (1 << PD2);   // enable pullUp resistor
  DDRB |= (1 << PB5);    // pin 13 output
}

void loop() {
  if (!(PIND & (1 << PD2))) { // if pin 2 is low or Button pressed
    PORTB |= (1 << PB5);      // pin 13 high  
  } else { 
    PORTB &= !(1 << PB5);     // pin 13 low
  }
}