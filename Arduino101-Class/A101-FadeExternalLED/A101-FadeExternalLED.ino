const int led = 9;            //  the PWM pin the LED is attached to
int brightness = 0;     //  store the current brightness of the led
int fadeRate = 3;     //  how many points to fade the LED by

void setup() {
//  pinMode(    9, OUTPUT );    // declare pin 9 to be an output
  pinMode( led, OUTPUT );    // declare pin 9 to be an output
}

void loop() {
 //   analogWrite(9, brightness);       // set the brightness of pin 9
  analogWrite(led, brightness);    // set the brightness of led

    // change the brightness for next time through the loop:
    brightness = brightness + fadeRate;

    // reverse the direction of the fading at the ends of the fade:
    if (brightness <= 0 || brightness >= 255) {
        fadeRate = -fadeRate ;
  }
  // Range checking.
  // Ensure that our stored brightness value doesn’t go higher
  // or lower than what the analog output allows.
  if ( brightness < 0 ) {
    brightness = 0;
  }
  if ( brightness > 255 ) {
    brightness = 255;
  }

    // wait for 30 milliseconds to see the dimming effect
    delay(30);
}
