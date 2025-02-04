# Day 5 | Rana

### Excercise: Click twice to toggle LED within 5 seconds.
#### Bonus: Click thrice to blink twice and toggle LED.
<hr>

ThinkerCad link: [Click here.](https://www.tinkercad.com/things/bva3WGs19gW-clickunderfiveseconds?sharecode=74XD09c8npXTJds619JFmBYOjWXfA-fi13-0khKIPJE)
#### Image:
![CircuitImage](/rana/day5/images/img.png)

#### Code
```cpp

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

```

#### Explaination:
- If we click `2 times` on the button within `5 second` it will `toggle` the led.
- If we click `3 times` then the LED will `blick twice` and then will `toggle`.
- If  `0 < click < 2` program will discard toggle action after 5 seconds.
- For the result we have to wait 5 second for every case.

<h4 style="color: red;">Issue with public link</h4>
Public link shows pending in thinkercad. I took a long time for the link to work properly.

![PublicLink](/rana/day5/images/issue.png)
