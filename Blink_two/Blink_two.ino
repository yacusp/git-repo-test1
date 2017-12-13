/*
  Blink two LED
 */


int led1Pin = 13;
int led2Pin = 5;
int blinkDelay = 1000;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(led1Pin, OUTPUT);
  pin
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led1Pin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(blinkDelay);              // wait for a second
  digitalWrite(led1Pin, LOW);    // turn the LED off by making the voltage LOW
  delay(blinkDelay); 
  digitalWrite(led2Pin, HIGH);
  delay(blinkDelay);   
  digitalWrite(led2Pin, LOW); 
  delay(blinkDelay);
}
