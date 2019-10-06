/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 */
 
int led = 13; //Pin 13 has an LED connected.

void setup()
{                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}
 
// the loop runs over and over again forever:
void loop() 
{
  digitalWrite(led, HIGH);   // turn the LED on.
  delay(1000);               // wait for a second.
  digitalWrite(led, LOW);    // turn the LED off.
  delay(1000);               // wait for a second.
}
