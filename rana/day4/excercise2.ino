#define LED_PIN 13
#define BUTTON_PIN 11

unsigned long timer;
unsigned long startTime = 0;
unsigned long currentTime = 0;
bool ledState = false;


void delayFunc(){

  if(timer < 3000){
    currentTime == 0;
  }else{
    delay(3000);
  }
  
}

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
}

void loop() {
  if (digitalRead(BUTTON_PIN) == LOW){
    ledState = true;

    digitalWrite(LED_PIN, HIGH);
    currentTime = millis();
    timer = currentTime - startTime;
    delayFunc();

  }else{
    digitalWrite(LED_PIN, LOW);

  }

}