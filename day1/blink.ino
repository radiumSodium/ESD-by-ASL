const uint8_t pinToBlink 10
unsigned long int timer = 0;
const unsigned long int interval = 500;
bool status = false;

void setup()
{
    pinMode(pinToBlink, OUTPUT);
}

void loop()
{
    if (millis() - timer >= interval)
    {
        status = !status;
        timer = millis();
        digitalWrite(pinToBlink, status)
    }
}