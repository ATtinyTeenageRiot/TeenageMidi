#include "TeenageUSB.h"

unsigned long lastTime;            // variable to store the last time we sent a chord

void setup() {
  // don't need to set anything up to use DigiKeyboard
}


void loop() {

  if (millis()-lastTime >= 500)  {             // every 500 miliseconds = 2 times per second        
         TeenageMidi.send(MIDI_NOTEON,60,127);            // put three notes into the MIDI send queue
         TeenageMidi.send(MIDI_NOTEON,64,127);
         TeenageMidi.send(MIDI_NOTEON,67,127);
         lastTime = millis();      
  }   

  TeenageMidi.update();

}
