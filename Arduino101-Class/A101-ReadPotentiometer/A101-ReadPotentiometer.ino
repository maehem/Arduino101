const int led = 9;            //  the PWM pin the LED is attached to
const int knob = A0;  //  the analog input pin the potentiometer is attached to
int brightness = 0;     //  store the current brightness of the led

void setup() {
  pinMode( led, OUTPUT );    // declare pin 9 to be an output pin
  pinMode( knob, INPUT );     // declare pin A0 to be an input pin
}

void loop() {
  // analogRead will return a value between 0 and 1023 but since
  // our LED needs a value between 0 and 255, we will dive the
  // potentiometer value by 4.
  brightness = analogRead(knob) / 4;  

  analogWrite(led, brightness);    // set the brightness of led
}
