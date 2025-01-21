void setup() {
  DDRD &= ~(1 << PD2);  
  PORTD |= (1 << PD2);  

  DDRB |= (1 << PB5);
}

void loop() {
  if (!(PIND & (1 << PD2))) { 
    PORTB |= (1 << PB5);      
  } else {
    PORTB &= ~(1 << PB5);
}