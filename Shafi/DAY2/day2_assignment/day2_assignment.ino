#define LED 13
#define SWITCH 6

void setup() {
  // Set LED pin as output
  DDRB |= (1 << DDB5); // DDRB controls direction for PORTB pins; DDB5 corresponds to pin 13 (PB5)

  // Set SWITCH pin as input
  DDRD &= ~(1 << DDD6); // DDRD controls direction for PORTD pins; DDD6 corresponds to pin 6 (PD6)
}

void loop() {
  // Check the state of the SWITCH pin
  if (PIND & (1 << PIND6)) { // PIND reads the current state of PORTD pins; PIND6 corresponds to pin 6 (PD6)
    PORTB &= ~(1 << PORTB5); // Turn the LED off (clear bit for PB5)
  } else {
    PORTB |= (1 << PORTB5); // Turn the LED on (set bit for PB5)
  }
}
