#include <Esplora.h>
/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  Esplora.writeRGB(255, 0, 0);
  delay(1000);
  Esplora.writeRGB(0, 255, 0);
  delay(1000);
  Esplora.writeRGB(0, 0, 255);
  delay(1000);
  Esplora.writeRGB(255, 255, 0);
  delay(1000);
  Esplora.writeRGB(255, 0, 255);
  delay(1000);
  Esplora.writeRGB(255, 255, 255);
  delay(1000);
}
