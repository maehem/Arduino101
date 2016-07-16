// pin locations will not change, so we make them const (constant)
const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;       // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  pinMode(ledPin, OUTPUT);    // initialize the LED pin as an output:
  pinMode(buttonPin, INPUT_PULLUP);    // initialize the pushbutton pin as an input with pullup.
}

void loop() {
  buttonState = digitalRead(buttonPin);   // read the state of the pushbutton value

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH
  if (buttonState == LOW) {
    digitalWrite(ledPin, HIGH);     // turn LED on
  } else {
    digitalWrite(ledPin, LOW);      // turn LED off
  }
}
