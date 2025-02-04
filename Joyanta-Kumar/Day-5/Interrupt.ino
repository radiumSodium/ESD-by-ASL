#define BUTTON_PIN 2
#define LED_PIN 13

int pressCount = 0;
unsigned long firstPressTime = 0;

void buttonISR() {
    if (pressCount == 0) {
        firstPressTime = millis();
    }
    pressCount++;
}

void setup() {
    pinMode(BUTTON_PIN, INPUT_PULLUP);
    pinMode(LED_PIN, OUTPUT);
    attachInterrupt(digitalPinToInterrupt(BUTTON_PIN), buttonISR, FALLING);
}

void loop() {
    if (pressCount > 0 && (millis() - firstPressTime >= 5000)) {
        if (pressCount == 2) {
            digitalWrite(LED_PIN, !digitalRead(LED_PIN));
        } 
        else if (pressCount == 3) {
            for (int i = 0; i < 2; i++) {
                digitalWrite(LED_PIN, HIGH);
                delay(300);
                digitalWrite(LED_PIN, LOW);
                delay(300);
            }
            digitalWrite(LED_PIN, !digitalRead(LED_PIN));
        }
        pressCount = 0;
    }
}