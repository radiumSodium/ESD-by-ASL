 //chatgpt use
 
 //Define the pins
const int buttonPin = 2;  // Button connected to Pin 2
const int ledPin = 13;    // LED connected to Pin 13

// Variable to store the button state
int buttonState = LOW;

// Variable to store the time when the button is pressed
unsigned long buttonPressTime = 0;

// Flag to indicate if the button has been pressed
bool buttonPressedFlag = false;

void setup() {
  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
  
  // Initialize the button pin as an input
  pinMode(buttonPin, INPUT);
  
  // Turn the LED on initially
  digitalWrite(ledPin, HIGH);
}

void loop() {
  // Read the button state
  buttonState = digitalRead(buttonPin);

  // Check if the button is pressed
  if (buttonState == HIGH && !buttonPressedFlag) {
    // Record the time when the button is pressed
    buttonPressTime = millis();
    buttonPressedFlag = true;  // Set the flag to indicate the button has been pressed
  }

  // If the button has been pressed, check if 3 seconds have passed
  if (buttonPressedFlag && (millis() - buttonPressTime >= 3000)) {
    // Turn the LED off
    digitalWrite(ledPin, LOW);
    buttonPressedFlag = false;  // Reset the flag
  }
}