#include"pitches.h"

int melody[] = {
  NOTE_D4, NOTONE, NOTE_D4, NOTONE, NOTE_D4, NOTONE, NOTE_D4, NOTONE, 
  NOTE_D4, NOTE_DS4, NOTE_G4, NOTE_D4, NOTONE, NOTE_D4, NOTONE,
  NOTE_D4, NOTE_DS4, NOTE_G4, NOTE_D4, NOTONE, NOTE_D4, NOTONE,
  NOTE_D4, NOTE_DS4, NOTE_G4, NOTE_D4, NOTONE, NOTE_D4, NOTONE,
  NOTE_D4, NOTE_DS4, NOTE_G4, NOTE_A4, NOTONE, NOTE_A4, NOTONE,
  
  NOTE_C5, NOTE_AS4, NOTE_A4, NOTE_G4, NOTONE, NOTE_G4, NOTONE,
  NOTE_C5, NOTE_AS4, NOTE_A4, NOTE_G4, NOTONE, NOTE_G4, NOTONE,
  
  NOTE_D4, NOTE_DS4, NOTE_G4, NOTE_D4, NOTONE, NOTE_D4, NOTONE,
  NOTE_D4, NOTE_DS4, NOTE_G4, NOTE_D4, NOTONE, NOTE_D4, NOTONE,
  
  END
};
//// note durations: 8 = quarter note, 4 = 8th note, etc.
int noteDurations[] = {
  4, 4, 4, 4, 4, 4, 4, 4,
  6, 6, 4, 4, 4, 4, 4,
  6, 6, 4, 4, 4, 4, 4,
  6, 6, 4, 4, 4, 4, 4,
  6, 6, 4, 4, 4, 4, 4,
  
  6, 6, 4, 4, 4, 4, 4,
  6, 6, 4, 4, 4, 4, 4,

  
  6, 6, 4, 4, 4, 4, 4,
  6, 6, 4, 4, 4, 4, 4,
  20
};

// notes in the song 'Mukkathe Penne'
//int melody[] = {
//NOTE_D4, NOTE_G4, NOTE_FS4, NOTE_A4,
//NOTE_G4, NOTE_C5, NOTE_AS4, NOTE_A4,                   
//NOTE_FS4, NOTE_G4, NOTE_A4, NOTE_FS4, NOTE_DS4, NOTE_D4,
//NOTE_C4, NOTE_D4,0,                                 
//
//NOTE_D4, NOTE_G4, NOTE_FS4, NOTE_A4,
//NOTE_G4, NOTE_C5, NOTE_D5, NOTE_C5, NOTE_AS4, NOTE_C5, NOTE_AS4, NOTE_A4,      //29               //8
//NOTE_FS4, NOTE_G4, NOTE_A4, NOTE_FS4, NOTE_DS4, NOTE_D4,
//NOTE_C4, NOTE_D4,0,                                       
//
//NOTE_D4, NOTE_FS4, NOTE_G4, NOTE_A4, NOTE_DS5, NOTE_D5,
//NOTE_C5, NOTE_AS4, NOTE_A4, NOTE_C5,
//NOTE_C4, NOTE_D4, NOTE_DS4, NOTE_FS4, NOTE_D5, NOTE_C5,
//NOTE_AS4, NOTE_A4, NOTE_C5, NOTE_AS4,             //58
//
//NOTE_D4, NOTE_FS4, NOTE_G4, NOTE_A4, NOTE_DS5, NOTE_D5,
//NOTE_C5, NOTE_D5, NOTE_C5, NOTE_AS4, NOTE_C5, NOTE_AS4, NOTE_A4, NOTE_C5, NOTE_G4,
//NOTE_A4, 0, NOTE_AS4, NOTE_A4, 0, NOTE_G4,
//NOTE_G4, NOTE_A4, NOTE_G4, NOTE_FS4, 0,
//
//NOTE_C4, NOTE_D4, NOTE_G4, NOTE_FS4, NOTE_DS4,
//NOTE_C4, NOTE_D4, 0,
//NOTE_C4, NOTE_D4, NOTE_G4, NOTE_FS4, NOTE_DS4,
//NOTE_C4, NOTE_D4, END
//
//};
//
//// note durations: 8 = quarter note, 4 = 8th note, etc.
//int noteDurations[] = {       //duration of the notes
//8,4,8,4,
//4,4,4,12,
//4,4,4,4,4,4,
//4,16,4,
//
//8,4,8,4,
//4,2,1,1,2,1,1,12,
//4,4,4,4,4,4,
//4,16,4,
//
//4,4,4,4,4,4,
//4,4,4,12,
//4,4,4,4,4,4,
//4,4,4,12,
//
//4,4,4,4,4,4,
//2,1,1,2,1,1,4,8,4,
//2,6,4,2,6,4,
//2,1,1,16,4,
//
//4,8,4,4,4,
//4,16,4,
//4,8,4,4,4,
//4,20,
//};

int speed=60 ;  //higher value, slower notes
void setup() {

Serial.begin(9600);
for (int thisNote = 0; melody[thisNote]!=-1; thisNote++) {

int noteDuration = speed*noteDurations[thisNote];
if (melody[thisNote] == NOTONE) {
  noTone(10);
} else {
  tone(10, melody[thisNote],noteDuration*.95);
}
Serial.println(melody[thisNote]);

delay(noteDuration);

noTone(10);
}
}

void loop() {
// no need to repeat the melody.
noTone(10);
}
