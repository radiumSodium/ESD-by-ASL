//AVR PIN 6

void setup() {
  // put your setup code here, to run once:
  DDRB = B01000000;
}

void loop() {
  // put your main code here, to run repeatedly:
  PORTB |= B01000000;
  delay(1000);
  PORTB &= !B01000000;
  delay(1000);
}
