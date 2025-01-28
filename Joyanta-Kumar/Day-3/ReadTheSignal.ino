// Here, I am using some bitwise operator that I don't understand. Very soon, I will.
// NOTE: I did not write the code.
// Just filling the Day-3 folder for the git repo.
#define BTN 6
#define LED 8

void setup() {
  DDRD &= ~(1 << BTN);
  DDRD |= (1 << LED);
}

void loop() {
  // Read the state of the button
  if (PIND & (1 << BTN)) {
    PORTD &= ~(1 << LED);
  } else {
    PORTD |= (1 << LED);
  }
}
