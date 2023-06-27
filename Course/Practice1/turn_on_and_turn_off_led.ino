/* Code by Servicios Universales Keops.
* In this example, the led of pin 13 of the Arduino board
* already has a led incorporated, therefore, there is no
* need to make external circuit.
*/

void setup() {
  pinMode(13, OUTPUT);      // We configure the pin 13 of the Arduino board.
}

void loop() {
  digitalWrite(13, HIGH);   // We tell the Arduino board to turn on the led
  // The delay function works in milliseconds, so a second is a thousand milliseconds and we write that inside the parentheses 
  delay(1000);              // We tell the Arduino board wait 1 second
  digitalWrite(13, LOW);    // We tell the Arduino board to turn off the led
  delay(1000);              // We tell the Arduino board wait 1 second
}
