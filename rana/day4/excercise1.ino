#define LED_PIN PB5 // pin 13       
#define BUTTON_PIN PB3  // pin 11   

void setup() {
  DDRB |= (1 << LED_PIN);  // B0010_0000
  DDRB &= ~(1 << BUTTON_PIN); // ~(B0000_1000)
  PORTB |= (1 << BUTTON_PIN);
}

void loop() {
  if (!(PINB & (1 << BUTTON_PIN))) { 
    PORTB |= (1 << LED_PIN);  
  } else {
    PORTB &= ~(1 << LED_PIN);
  }
}