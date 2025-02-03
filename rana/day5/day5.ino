
#define buttonPin 2
#define ledPin 8
bool ledState = false;
unsigned long firstPressTime = 0;
volatile int buttonPressCount = 0;

void buttonEvent();
void blinkLedTwice();
void toggleLed();

void setup(){
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(buttonPin), buttonEvent, RISING);
}

void loop(){
  if (buttonPressCount > 0){
    unsigned long currentTime = millis();
    if (currentTime - firstPressTime > 5000){
      if (buttonPressCount == 2){
        toggleLed();
      }else if (buttonPressCount == 3 ){
        blinkLedTwice();
        toggleLed();
      }
      buttonPressCount = 0;
    }
  }
}


void buttonEvent(){
  if (buttonPressCount == 0){
    firstPressTime = millis();
  }
  buttonPressCount++;
}

void blinkLedTwice(){
  for (int i = 0; i < 2; i++){
    digitalWrite(ledPin, HIGH);
    delay(250);
    digitalWrite(ledPin, LOW);
    delay(250);
  }
}

void toggleLed(){
  ledState = !ledState;
  digitalWrite(ledPin, ledState);
}
