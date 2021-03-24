// Blink

// Turns an LED on for one second, then off for one second, repeatedly.

// Created 8 March 2018

// This example code is in the public domain.
#ifdef __unix__
#include <Piduino.h>  // All the magic is here ;-)
#include <GpioLed.h>
#else
// Defines the serial port as the console on the Arduino platform
#define Console Serial
#endif

// <DANGER> Be careful !!! Before launching this program :
//    -> Check that the pin below is well connected to an LED ! <-

GpioLed led (0, false);

void setup() {
  // initialize digital pin ledPin as an output.
  led.begin();
}

void loop () {
  // Press Ctrl+C to abort ...
  led.set (HIGH); // turn the LED on (HIGH is the voltage level)
  delay (500);                 // wait for a second
  led.set (LOW); // turn the LED off by making the voltage LOW
  delay (500);   // wait for a second
}
