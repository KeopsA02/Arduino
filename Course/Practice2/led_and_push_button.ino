/* Code by Servicios Universales Keops.
* You should do the circuit showed in the image that it's in this folder.
*/

void setup() {
  pinMode(13, INPUT);    // We configure the pin 13 of the Arduino board as input signal.
  pinMode(12, OUTPUT);   // We configure the pin 13 of the Arduino board as output signal.
}

void loop() {
  // The if sentence read a sentence, and if the sentence is true, return a 1 (HIGH) and if the sentence is false return a 0 (FALSE)
  // If is true, it does the action in keys of "if", otherwise, it does the action in keys of "else"
  // digitalRead() read the pin and save the value (0 or 1).
  if(digitalRead(13) == HIGH){
    digitalWrite(12, HIGH);
  }else{
    digitalWrite(12, LOW);
  }
}
