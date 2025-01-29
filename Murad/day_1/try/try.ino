#define PIN 13

int LED = LOW;
long remember_time = 0;

void setup() {
  pinMode(PIN, OUTPUT);
  digitalWrite(PIN, LED);
}

void loop() {
  if (millis() - remember_time >= 1000) {
    remember_time = millis();
    if (LED == HIGH) {
      digitalWrite(PIN, LOW);
      LED = LOW;
    }

    else {
      digitalWrite(PIN, HIGH);
      LED = HIGH;
    }
  }
}