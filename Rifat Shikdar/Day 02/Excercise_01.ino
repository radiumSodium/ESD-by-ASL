void setup() {
DDRD=B01000000;

}

void loop() {
  PORTD |=B01000000;
  delay (1000);
 PORTD &=!B01000000;
 delay (1000);

}
