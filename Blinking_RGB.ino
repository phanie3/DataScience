/* Blink without Delay
 
 Turns on and off a light emitting diode(LED) connected to a digital  
 pin, without using the delay() function.  This means that other code
 can run at the same time without being interrupted by the LED code.
 
 The circuit:
 * LED attached from pin 13 to ground.
 * Note: on most Arduinos, there is already an LED on the board
 that's attached to pin 13, so no hardware is needed for this example.
 
 
 created 2005
 by David A. Mellis
 modified 8 Feb 2010
 by Paul Stoffregen
 
 This example code is in the public domain.

 
 http://www.arduino.cc/en/Tutorial/BlinkWithoutDelay
 */

// constants won't change. Used here to 
// set pin numbers:
const int ledPin_R =  13;      // the number of the LED pin
const int ledPin_G =  12;
const int ledPin_B =  11;
const int TIME = 500;

// Variables will change:
int ledState_R = LOW;             // ledState used to set the LED
int ledState_G = LOW;
int ledState_B = LOW;
long previousMillis = 0;        // will store last time LED was updated

// the follow variables is a long because the time, measured in miliseconds,
// will quickly become a bigger number than can be stored in an int.
long interval = 1000;           // interval at which to blink (milliseconds)

void setup() {
  // set the digital pin as output:
  pinMode(ledPin_R, OUTPUT);      
  pinMode(ledPin_G, OUTPUT);
  pinMode(ledPin_B, OUTPUT);
}

void loop()
{
  // here is where you'd put code that needs to be running all the time.

  // check to see if it's time to blink the LED; that is, if the 
  // difference between the current time and last time you blinked 
  // the LED is bigger than the interval at which you want to   

    // if the LED is off turn it on and vice-versa:
    ledState_B = LOW;
    ledState_G = LOW;
    ledState_R = HIGH;
    fn();
    delay(TIME);
    ledState_R = LOW;
    ledState_G = HIGH;
    ledState_B = LOW;
    fn();
    delay(TIME);
    ledState_B = HIGH;
    ledState_G = LOW;
    ledState_R = LOW;
    fn();
    delay(TIME);
 
}

void fn()
{
     digitalWrite(ledPin_R, ledState_R);
    digitalWrite(ledPin_G, ledState_G);
    digitalWrite(ledPin_B, ledState_B);
}
