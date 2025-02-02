unsigned long int t = 0;


void setup() {
  Serial.begin(9600);
  DDRB = 0b00111111;
  Serial.println(DDRB, BIN);
}


void loop() {
  if (digitalRead(12) == 1)
  {
    digitalWrite(LED_BUILTIN, HIGH);
    t = millis();
  }

  if (millis() - t > 2000)
  {
    digitalWrite(LED_BUILTIN, LOW);
  }
}
