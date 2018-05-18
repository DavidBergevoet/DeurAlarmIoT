/*
  Arduino Mario Bros Tunes
  With Piezo Buzzer and PWM

  Connect the positive side of the Buzzer to pin 3,
  then the negative side to a 1k ohm resistor. Connect
  the other side of the 1 k ohm resistor to
  ground(GND) pin on the Arduino.

  by: Dipto Pratyaksa
  last updated: 31/3/13
*/
#include "Songs.h"

#define melodyPin 3

void sing(int s) {
  switch (s) {
    case 0:
      Serial.println(" 'Underworld Theme'");
      play(underworld_melody, underworld_tempo, underworld_size);      
      break;
    case 1:
      Serial.println(" 'Mario Theme'");
      play(mario_main_melody, mario_main_tempo, mario_main_size);
      break;
    case 2:
      Serial.println(" 'Adventure Time'");
      play(adventure_time_melody, adventure_time_tempo, adventure_time_size);
      break;
    case 3:
      Serial.println(" 'Pirates of the Carribean'");      
      play(pirates_carribean_melody, pirates_carribean_tempo, pirates_carribean_size);
      break;
    default:
      Serial.println(" 'Mario Theme'");
      play(mario_main_melody, mario_main_tempo, mario_main_size);
  }
}

void buzz(int targetPin, long frequency, long length) {
  digitalWrite(13, HIGH);
  long delayValue = 1000000 / frequency / 2; // calculate the delay value between transitions
  //// 1 second's worth of microseconds, divided by the frequency, then split in half since
  //// there are two phases to each cycle
  long numCycles = frequency * length / 1000; // calculate the number of cycles for proper timing
  //// multiply frequency, which is really cycles per second, by the number of seconds to
  //// get the total number of cycles to produce
  for (long i = 0; i < numCycles; i++) { // for the calculated length of time...
    digitalWrite(targetPin, HIGH); // write the buzzer pin high to push out the diaphram
    delayMicroseconds(delayValue); // wait for the calculated delay value
    digitalWrite(targetPin, LOW); // write the buzzer pin low to pull back the diaphram
    delayMicroseconds(delayValue); // wait again or the calculated delay value
  }
  digitalWrite(13, LOW);
}

void play(int melody[], int tempo[], int size) {
  stop = false;
  for (int thisNote = 0; thisNote < size; thisNote++) {
    if (stop == 1) {
      Serial.println("stop");
      return;
    }
    // to calculate the note duration, take one second
    // divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.
    int noteDuration = 1000 / tempo[thisNote];

    buzz(melodyPin, melody[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);

    // stop the tone playing:
    buzz(melodyPin, 0, noteDuration);
  }
  Serial.println("exit");
}



