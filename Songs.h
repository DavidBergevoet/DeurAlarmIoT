// 1/8 Note  = 24
// 1/4 Note = 12
// 3/8 Note =  8
// 1/2 Note =  6
#pragma once

#include "Notes.h"
//Mario main theme melody

int mario_main_size = 78;

static int mario_main_melody[] = {
  NOTE_E7, NOTE_E7, 0, NOTE_E7,
  0, NOTE_C7, NOTE_E7, 0,
  NOTE_G7, 0, 0,  0,
  NOTE_G6, 0, 0, 0,
 
  NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0,
 
  NOTE_G6, NOTE_E7, NOTE_G7,
  NOTE_A7, 0, NOTE_F7, NOTE_G7,
  0, NOTE_E7, 0, NOTE_C7,
  NOTE_D7, NOTE_B6, 0, 0,
 
  NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0,
 
  NOTE_G6, NOTE_E7, NOTE_G7,
  NOTE_A7, 0, NOTE_F7, NOTE_G7,
  0, NOTE_E7, 0, NOTE_C7,
  NOTE_D7, NOTE_B6, 0, 0
};
//Mario main them tempo
static int mario_main_tempo[] = {
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
 
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
 
  9, 9, 9,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
 
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
 
  9, 9, 9,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
};

//Underworld melody

static int underworld_size = 56;
static int underworld_melody[] = {
  NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4,
  NOTE_AS3, NOTE_AS4, 0,
  0,
  NOTE_C4, NOTE_C5, NOTE_A3, NOTE_A4,
  NOTE_AS3, NOTE_AS4, 0,
  0,
  NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,
  NOTE_DS3, NOTE_DS4, 0,
  0,
  NOTE_F3, NOTE_F4, NOTE_D3, NOTE_D4,
  NOTE_DS3, NOTE_DS4, 0,
  0, NOTE_DS4, NOTE_CS4, NOTE_D4,
  NOTE_CS4, NOTE_DS4,
  NOTE_DS4, NOTE_GS3,
  NOTE_G3, NOTE_CS4,
  NOTE_C4, NOTE_FS4, NOTE_F4, NOTE_E3, NOTE_AS4, NOTE_A4,
  NOTE_GS4, NOTE_DS4, NOTE_B3,
  NOTE_AS3, NOTE_A3, NOTE_GS3,
  0, 0, 0
};
//Underwolrd tempo
static int underworld_tempo[] = {
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
  3,
  12, 12, 12, 12,
  12, 12, 6,
  6, 18, 18, 18,
  6, 6,
  6, 6,
  6, 6,
  18, 18, 18, 18, 18, 18,
  10, 10, 10,
  10, 10, 10,
  3, 3, 3
};

static int adventure_time_size = 44;

static int adventure_time_melody[] = {
  NOTE_D5, 
  NOTE_G5, NOTE_G5, NOTE_G5, NOTE_G5, NOTE_FS5,
  NOTE_FS5, NOTE_E5, NOTE_D5, NOTE_E5, NOTE_D5, NOTE_D5,
  NOTE_C5, NOTE_B5, NOTE_A5, NOTE_G4,  
  0, NOTE_C5, NOTE_B5, NOTE_A5, NOTE_G4, 0,  
  NOTE_G5, 0, NOTE_G5, NOTE_G5, 0, NOTE_G5, 
  NOTE_FS5, 0, NOTE_E5, NOTE_E5, NOTE_D5, NOTE_D5, 
  NOTE_C5, NOTE_C5, NOTE_C5, NOTE_D5, 
  NOTE_D5, NOTE_A5, NOTE_B5, NOTE_A5, NOTE_G4, 
  NOTE_G5 //44
};

static int adventure_time_tempo[] = {  
  24,
  24, 12, 12, 12, 24,
  12, 24, 24, 24, 12, 24,
  12, 12, 12, 12, //16
  24, 12, 24, 24, 12, 24,  
  24, 24, 24, 12, 24, 12, 
  24, 24, 24, 12, 12, 24, 
  8, 24, 24, 8, 
  8, 24, 12, 24, 24, 
  12 
};


