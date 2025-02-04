#define buttonPin 2
#define ledPin 8
bool ledState = false;
unsigned long firstPressTime = 0;
volatile int buttonPressCount = 0;

void buttonEvent();
void blinkLedTwice();
void toggleLed();

void setup(){
  Serial.begin(9600);
  pinMode(buttonPin, INPUT_PULLUP);
  pinMode(ledPin, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(buttonPin), buttonEvent, RISING);
}

void loop(){
  Serial.println(buttonPressCount);
  delay(500);
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
    ledState == LOW ?  digitalWrite(ledPin, HIGH) : digitalWrite(ledPin, LOW);
    ledState = ! ledState;
    delay(250);
    ledState == LOW ?  digitalWrite(ledPin, HIGH) : digitalWrite(ledPin, LOW);
    ledState = ! ledState;
    delay(250);
    
  }
}

void toggleLed(){
  ledState = !ledState;
  digitalWrite(ledPin, ledState);
  buttonPressCount = 0;
}
