#define LED 13

long start;
bool on = false;

void setup() {
    start = millis();
    pinMode(LED, OUTPUT);
}

void loop() {
    if (millis() - start >= 1000) {
        on = !on;
        digitalWrite(LED, on);
        start = millis();
    }
}
