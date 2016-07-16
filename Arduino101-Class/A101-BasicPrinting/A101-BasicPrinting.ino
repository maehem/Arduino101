void setup() {
  Serial.begin(9600);     // initialize serial communication at 9600 bits per second
  while(!Serial);      // Arduino 101 Quirk:  Wait for Serial port to initialize.

  Serial.println( "Setup Complete" );
}

void loop() {
  Serial.println( "Message from the loop()" );
  delay(1000);          // delay in between reads for stability
}
