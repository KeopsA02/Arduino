#define Button 2                           // We define a variable and the value of that variable

void setup(){
  Serial.begin(9600);                      // We initialize our serial monitor to a value of 9600
  pinMode(Button, INPUT);                  // We set the working mode of the Arduino pin
}

void loop(){
  int ButtonState = digitalRead(Button);   // We create a variable of type integer that will have as value what it reads from the Button pin
  Serial.print("Button Satte: ");          // We show in the serial monitor, the text inside the "print" 
  Serial.print(ButtonState);               // We show in the serial monitor, the value of ButtonState 
  Serial.print("\t");                      // We give a line break (ENTER)
}
