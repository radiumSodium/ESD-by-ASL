// This code was written for ESP32C3 Super Mini.

// Here, settings the LED_BUILTIN low turns on the LED.
#define ledPin 8
#define btnPin 5

unsigned long int t = 0;

void setup()
{
  pinMode(ledPin, OUTPUT);
  pinMode(btnPin, INPUT);
  Serial.begin(115200);
}

void loop()
{
  if (digitalRead(btnPin) ==  1)
  {
    digitalWrite(ledPin, LOW);
    Serial.println("On");
    t = millis();
  }
  if (millis() - t > 2000)
  {
    digitalWrite(ledPin, HIGH);
    Serial.println("Off");
  }
}
