#define BUTTON 7

bool status;
long timestamp;

void setup() 
{
  pinMode(BUTTON,INPUT);
  pinMode(LED_BUILTIN,OUTPUT);

}

void loop() 
{
  if(!digitalRead(BUTTON))
  {
    status = true;
    timestamp = millis();    
  }

  if(millis() - timestamp >= 3000)
    status = false;
  
  digitalWrite(LED_BUILTIN,status);

}
