const int led = 9;    //  the PWM pin the LED is attached to
const int knob = A0;  //  the analog input pin the potentiometer is attached to
int knobValue = 0;    //  raw value of the potentiometer
int brightness = 0;   //  store the current brightness of the led

void setup() {
  pinMode( led, OUTPUT );    // declare pin 9 to be an output pin
  pinMode( knob, INPUT );    // declare pin A0 to be an input pin

  Serial.begin(9600); // Start using the serial at 9600 bps
  while(!Serial);     // wait for serial to be ready
}

void loop() {
  // analogRead will return a value between 0 and 1023 but since
  // our LED needs a value between 0 and 255, we will dive the
  // potentiometer value by 4.
  knobValue = analogRead(knob);
  brightness = knobValue  / 4;  

  analogWrite(led, brightness); // set the brightness of led
  
  Serial.println( knobValue  ); // print the value of brightness
  delay(50);
}
