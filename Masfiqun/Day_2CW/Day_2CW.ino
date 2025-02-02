// LED blinking using

void setup() {
  // put your setup code here, to run once:
  DDRD = B01000000;
}

void loop() {
  // put your main code here, to run repeatedly:
  PORTD |= B01000000;
  delay(1000);
  PORTD &= !B0100000;
  delay(1000);
}
