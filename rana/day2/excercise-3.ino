/*
  Program: Taking input from pin 2, and trun led on 13
*/

void setup() {
  DDRD &= ~(1 << PD2);   // pin 2 input 
  PORTD |= (1 << PD2);   // enable pullUp resistor
  DDRB |= (1 << PB5);    // pin 13 output
}

void loop() {
  if (!(PIND & (1 << PD2))) { // if pin 2 is low or Button pressed
    PORTB |= (1 << PB5);      // pin 13 high  
  } else { 
    PORTB &= ~(1 << PB5);     // pin 13 low
  }
}

/*
  DDRD = Data Direction Registe for PortD
  values: input(0), output(1)
  PD2 is pin 2
            786543210
            B00000000
  PD2     = 0000_0100

  1       = 0000_0001
  1 << 2  = 0000_0100
  ~(1<<2) = 1111_1011


  DDRD    = 0000_0000
  ~(1<<2) = 1111_1011
  ------------------
       &  = 0000_0000

  PORTD   = 0000_0000
  (1 << 2)= 0000_0100
  --------------------
        | = 0000_0100 
  

*/
