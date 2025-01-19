#define LED 2

int led_state=0;
long remember_time=0;

void setup()
{
  pinMode(LED,OUTPUT);
  digitalWrite(LED,led_state);
}

void loop()
{
  if(millis()- remember_time>=1000)
  {
    remember_time=millis();
  digitalWrite(LED, !digitalRead(LED));
  }

}