unsigned long int t = 0;
char ledStat = 'T';

void setup()
{
  Serial.begin(115200);
  delay(1000);
  Serial.println("Program strated.");
}
void loop()
{
  if (millis() - t >= 1000) 
  {
    t = millis();
    if (ledStat == 'O')
    {
      ledStat = 'X';
    }
    else
    {
      ledStat = 'O';
    }
    Serial.print(ledStat);
  }
}
