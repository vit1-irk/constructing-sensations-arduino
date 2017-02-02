#include "pitches.h"

int pauseBetweenNotes = 4;
int notelength = 120;

const int pitches[] = { 31, 33, 35, 37, 39, 41, 44, 46, 49, 52, 55, 58, 62, 65, 69, 73, 78, 82, 87, 93, 98,
104, 110, 117, 123, 131, 139, 147, 156, 165, 175, 185, 196, 208, 220, 233, 247, 262, 277, 294, 311, 330, 349,
370, 392, 415, 440, 466, 494, 523, 554, 587, 622, 659, 698, 740, 784, 831, 880, 932, 988, 1047, 1109, 1175,
1245, 1319, 1397, 1480, 1568, 1661, 1760, 1865, 1976, 2093, 2217, 2349, 2489, 2637, 2794, 2960, 3136, 3322,
3520, 3729, 3951, 4186, 4435, 4699, 4678 };

int pauses[] = { notelength, notelength*2, notelength*3, notelength*4 };

const PROGMEM byte melody1[] = { D6, p2, G5, p2, AS5, p, A5, p2, F5, p2, F5, p, G5, p3,
G5, A5, AS5, D6, p4, p4, DS6, p2, G5, p2, A5, p, AS5, p2, C6, p2, D6, p,
DS6, p3, G5, A5, AS5, DS6, p4, p4, FS6, p2, A5, p2, DS6, p, A6, p2, C6, p2, FS6, p, C7,
p3, p4, p4, p4, G5, p2, D5, p2, G5, p, A5, p2, AS5, C6, AS5, F5, p, G5, p3, p4, p4, p4,

DS5, GS2, GS3, GS4, p2, B4, p, AS4, p2, FS4, p2, FS4, p,
GS4, p3, GS4, AS4, B4, DS5, p4, p2, CS5, DS5, E5, GS2, E3, GS4, p2, AS4, p, B4, p2,
CS5, p2, DS5, p, E5, p3, GS4, AS4, B4, E5, p4, p2, DS5, E5, G5, GS2, DS3, B4, p2,
E5, p, AS5, p2, CS5, p2, G5, p, CS6, p3, p4, p4, p4, GS4, GS2, GS3, DS4, p2, GS4, p, AS4,
p2, B4, CS5, B4, FS4, p, GS4, p3, p4, p4, p4
};

const byte melody3[] = { GS4, A4, DS5, E5, FS5, GS5, GS4, A4, DS5, E5, FS5, GS5,
GS4, A4, DS5, E5, FS5, GS5, A5, GS5, FS5, E5, DS5, A4, GS4, A4, DS5, E5, FS5,
GS5, DS4, E4, FS4, A4, DS5, E5, FS5, GS5, CS4, DS4, E4, A4, DS5, E5, FS5, GS5, FS5, p,
DS5, CS5, DS5, p4 };

byte melody31[] = { CS6, D6, GS5, A4, B3, CS4,
CS6, D6, GS5, A4, B3, CS4,
CS6, D6, GS5, A4, B3, CS4, D4, CS4, B4, A5, GS5, D6,
CS6, D6, GS5, A4, B3, CS4,
GS5, A5, B5, D6, GS5, A4, B3, CS4,
FS5, GS5, A5, D6, GS5, A4, B3, CS4, B4, CS5, B4, CS5, p4
};

byte melody32[] = { FS6, G6, CS6, D5, E4, FS4, FS6, G6, CS6, D5, E4, FS4, FS6, G6,
CS6, D5, E4, FS4, G4, FS4, E5, D6, CS6, G6, FS6, G6, CS6, D5, E4, FS4,
CS6, D6, E6, G6, CS6, D5, E4, FS4, B5, CS6, D6, G6, CS6, D5, E4, FS4,
G4, FS4, E5, D6, CS6, FS6
};

const PROGMEM byte durations3[] = { 3, 3, 2, 3, 3, 2, 3, 3, 2, 3, 3, 2, 3, 3, 2, 3, 3, 2, 3, 3, 2, 3, 3, 2, 3, 3, 2, 3, 3, 2,
1, 1, 1, 3, 2, 3, 3, 2, 1, 1, 1, 3, 2, 3, 3, 2, 5, 0, 1, 1, 4, 0 };

const PROGMEM byte durations31[] = { 3, 3, 2, 3, 3, 2,
3, 3, 2, 3, 3, 2,
3, 3, 2, 3, 3, 2, 3, 3, 2, 3, 3, 2,
3, 3, 2, 3, 3, 2,
1, 1, 1, 3, 2, 3, 3, 2,
1, 1, 1, 3, 2, 3, 3, 2, 6, 1, 1, 4, 0
};

const PROGMEM byte durations32[] = { 3, 3, 2, 3, 3, 2,
3, 3, 2, 3, 3, 2,
3, 3, 2, 3, 3, 2, 3, 3, 2, 3, 3, 2,
3, 3, 2, 3, 3, 2,
1, 1, 1, 3, 2, 3, 3, 2,
1, 1, 1, 3, 2, 3, 3, 2, 3, 3, 2, 3, 3, 2
};

const PROGMEM byte melody4[] = { GS4, CS2, CS3, CS4, CS2, CS3, E4, CS3, DS4, CS2, CS3, B3, CS2, CS3, B3, CS3,
CS4, CS2, CS3, p, CS4, DS4, E4, GS4, p, CS3, CS2, CS3, CS2, CS3, FS4, GS4,
A4, CS2, A2, CS4, CS2, A2, DS4, A2, E4, CS2, A2, FS4, CS2, A2, GS4, A2,
A4, CS2, A2, CS2, CS4, DS4, E4, A4, p, A2, CS2, A2, CS2, A2, GS4, A4,
C5, CS2, GS2, E4, CS2, GS2, A4, GS2, DS5, CS2, GS2, FS4, CS2, GS2, C5, GS2,
FS5, p, CS2, GS2, CS2, GS2, p, GS2, p, CS2, GS2, p, CS2, GS2, p, GS2,
CS4, CS2, CS3, GS3, CS2, CS3, CS4, CS3, DS4, CS2, CS3, E4, FS4, E4, B3, CS3,
CS4, CS2, CS3, p, CS2, CS3, p, CS3, p, CS2, CS3, p, CS2, CS3, p, CS3 };

const PROGMEM byte melody5[] = { DS5, CS2, CS3, GS4, CS2, CS3, CS4, CS2, DS4, CS2, CS3, GS4, CS2, CS3, CS5, CS2,
GS4, CS2, CS3, CS2, CS4, DS4, E4, GS4, CS2, CS3, CS2, FS5, CS2, CS3, GS5, CS2,
A5, CS2, A2, CS5, CS2, A2, DS5, CS2, E5, CS2, A2, FS5, CS2, A2, GS5, CS2,
A5, CS2, A2, CS2, FS4, GS4, A4, CS5, CS2, A2, CS2, FS5, CS2, A2, GS5, A2,
C6, CS2, GS2, GS4, CS2, GS2, C5, GS2, FS5, CS2, GS2, A4, CS2, GS2, DS5, GS2,
A5, CS2, GS2, p, CS2, GS2, p, GS2, p, CS2, GS2, p, CS2, GS2, p, GS2,
CS6, CS2, CS3, CS5, CS2, CS3, GS5, CS3, DS6, CS2, CS3, E5, CS2, CS3, GS5, CS3,
E6, CS2, CS3, p, CS2, CS3, p, CS3, p, CS2, CS3, p, CS2, CS3, p, CS3
};

const PROGMEM byte melody6[] = {
DS6, GS2, GS3, E6, GS2, GS3, AS5, GS3, B4, GS2, GS3, CS4, GS2, GS3, DS4, p,
DS7, p2, E7, p2, AS6, p, B5, p2, CS5, p2, DS5, p,
DS6, GS2, E3, E6, GS2, GS3, AS5, B3, B4, GS2, E3, CS4, GS2, E3, DS4, p,
E5, p2, DS5, p2, CS6, p, B6, p2, AS6, p2, E7, p,
DS6, GS2, DS3, E6, GS2, G3, AS5, AS3, B4, GS2, DS3, CS4, GS2, DS3, DS4, p,
AS6, B6, CS7, E7, p2, AS6, p, B5, p2, CS5, p2, DS5, p,
GS5, AS5, B5, E6, GS2, GS3, AS5, GS3, B4, GS2, GS3, CS4, GS2, GS3, DS4, p,
B4, p2, AS4, p2, CS6, p, B6, p2, AS6, p2, E7, p,

GS4, GS1, GS3, A4, GS2, GS3, DS5, C4, E5, GS2, DS4, FS5, GS2, FS4, GS5, GS3,
GS4, FS1, A3, FS2, FS4, GS4, A4, E5, A3, FS2, CS4, E4, FS2, A3, CS4, A3,
FS4, B1, A3, A4, B2, B3, DS5, DS4, E5, B2, FS4, FS5, B2, A4, GS5, B3,
E5, GS1, E3, GS2, GS4, A4, B4, FS5, E3, GS2, GS3, B3, GS2, E3, GS3, E3,
GS4, CS2, A3, A4, CS3, A3, DS5, CS4, E5, CS3, E4, FS5, CS3, CS5, GS5, A3,
GS4, FS1, A3, FS2, FS4, GS4, A4, E5, A3, FS2, CS4, E4, FS2, A3, CS4, A3,
FS4, B1, A3, A4, B2, B3, DS5, DS4, E5, B2, FS4, FS5, B2, A4, GS5, B3,
A5, E2, E4, E3, GS4, A4, B4, A5, E4, E3, GS4, B4, E3, E4, GS4, E4
};

const byte melody7[] {
GS6, A6, DS6, E5, FS4, GS4, A3, CS5, DS5, E5, A5, FS6, GS6, A6, DS5, E5, FS5,
A5, GS5, DS4, GS4, B4, DS5, E5, GS6, A6, DS6, E5, FS4, GS4,
A3, FS4, GS4, A4, A5, FS6, GS6, A6, DS5, E5, FS5, A5, GS5, C5, CS5, DS5, A5, GS5,
p4, p4, p4, p4
};

const PROGMEM byte durations7[] {
3, 3, 2, 3, 3, 2,  4, 1, 1, 1, 9,
3, 3, 2, 3, 3, 2,  2, 2, 1, 1, 1, 4, 5,
3, 3, 2, 3, 3, 2,  4, 1, 1, 1, 9,
3, 3, 2, 3, 3, 2,  2, 2, 1, 1, 1, 4, 5, 0, 0, 0, 0
};

const PROGMEM byte melody8[] {
GS3, DS4, GS4, DS5, DS5, DS4, GS4, DS5,
DS5, DS4, GS4, DS5, DS5, DS4, GS4, DS5,
E5, DS4, GS4, E5, E5, DS4, GS4, E5,
E5, CS4, GS4, E5, E5, CS4, GS4, E5,
GS3, CS4, GS4, AS4, GS3, CS4, GS4, AS4,
GS3, CS4, GS4, CS5, GS3, CS4, GS4, CS5,
GS3, DS4, GS4, DS5, GS3, DS4, GS4, DS5,
GS3, DS4, GS4, DS5, GS3, DS4, GS4, DS5
};

const PROGMEM byte melody9[] {
F6, p2, AS5, p2, DS5, p, F5, p2, AS5, p2, DS6, p,
AS5, p3, DS5, F5, FS5, AS5, p3, GS6, p2, AS6, p,
B6, p2, DS6, p2, F6, p, FS6, p2, GS6, p2, AS6, p,
B6, p3, GS5, AS5, B5, DS6, p3, GS5, p2, AS5, p,
D6, p2, B4, p2, D5, p, GS5, p2, B4, p2, F5, p,
B5, p3, B5, p3, B5, p3, B5, p3,
DS6, p2, DS5, p2, AS5, p, F6, p2, FS5, p2, AS5, p,
FS6, p3, FS6, p3, FS6, p3, FS6, p3,

AS2, GS3, AS3, D4, F4, p, F5, FS5, GS5, p2, AS5, p2, B5, p,
B5, GS3, B3, DS4, FS4, p, DS5, F5, FS5, p2, AS5, p2, B5, p,
B5, B3, CS4, F4, GS4, p, F5, FS5, GS5, p2, AS5, p2, B5, p,
B5, CS4, F4, AS5, AS4, FS5, p2, GS5, p2, AS5, p2, F5, p,
FS5, DS4, FS4, AS4, B4, p, DS5, F5, FS5, p2, AS5, p2, B5, p,
B5, GS3, B3, DS4, FS4, p, DS5, F5, FS5, p2, AS5, p2, F6, p,
F6, CS4, F4, GS4, B4, p, F5, FS5, GS5, p2, AS6, p2, B6, p,
B6, FS3, AS3, AS6, FS4, GS6, p, GS6, p2, FS6, p2, F6, p,

GS6, AS3, D4, F4, GS3, AS3, D4, F4, GS3, AS3, D4, F4, GS3, AS3, D4, F4,
GS2, B3, DS4, FS4, GS3, B3, DS4, FS4, GS3, B3, DS4, FS4, GS3, B3, DS4, FS4,
CS2, CS4, F4, GS4, B3, CS4, F4, GS4, B3, CS4, F4, GS4, B3, CS4, F4, GS4,
AS2, F4, FS4, AS4, CS4, F4, FS4, AS4, CS4, F4, FS4, AS4, CS4, F4, FS4, AS4,
DS2, FS4, AS4, B4, DS4, FS4, AS4, B4, DS4, FS4, AS4, B4, DS4, FS4, AS4, B4,
E2, E4, GS4, B4, B3, E4, GS4, B4, B3, E4, GS4, B4, B3, E4, GS4, B4,
AS2, FS4, GS4, B4, D4, F4, GS4, B4, D4, F4, GS4, B4, D4, F4, GS4, B4,
AS3, D4, GS4, B4, p3, B4, p3, B4, p3, p,

F6, DS3, DS4, AS5, DS3, DS4, DS5, DS3, F5, DS4, DS3, AS5, DS3, DS4, DS6, DS3,
AS5, DS3, DS4, DS3, DS5, F5, FS5, AS5, DS3, DS4, DS3, GS6, DS3, DS4, AS6, DS3,
B6, DS3, B3, DS6, DS3, B3, F6, DS3, FS6, DS3, B3, GS6, DS3, B3, AS6, DS3,
B6, DS3, B3, DS3, GS5, AS5, B5, DS6, DS3, B3, DS3, GS5, DS3, B3, AS5, DS3,

D6, DS3, AS3, AS4, DS3, AS3, D5, AS3, GS5, DS3, AS3, B4, DS3, AS3, F5, AS3,
B5, DS3, AS3, p, DS3, AS3, p, AS3, p, DS3, AS3, p, DS3, AS3, p, AS3,
DS6, DS3, DS4, DS5, DS3, DS4, AS5, DS4, F6, DS3, DS4, FS5, DS3, DS4, AS5, DS4,
FS6, DS3, AS3, p, DS3, AS3, p, AS3, p, DS3, AS3, p, DS3, AS3, p, AS3,

F6, AS2, AS3, FS6, AS2, AS3, C6, AS3, CS5, AS2, AS3, DS4, AS2, AS3, F4, AS3,
F6, AS2, AS3, FS6, AS2, AS3, C6, AS3, CS5, AS2, AS3, DS4, AS2, AS3, F4, AS3,
F6, AS2, FS3, FS6, AS2, AS3, C6, CS4, CS5, AS2, FS3, DS4, AS2, AS3, F4, CS4,
FS4, AS2, FS3, F4, AS2, AS3, DS5, CS4, CS6, AS2, FS3, C6, AS2, AS3, FS6, CS4,
F6, AS2, F3, FS6, AS2, A3, C6, C4, CS5, AS2, F3, DS4, AS2, A3, F4, C4,
C6, CS6, DS6, FS6, AS2, A3, C6, C4, CS5, AS2, F3, DS4, AS2, A3, F4, C4,
AS5, C6, CS6, FS6, AS2, AS3, C6, AS3, CS5, AS2, AS3, DS4, AS2, AS3, F4, AS3,
CS4, AS2, AS3, C4, AS2, AS3, DS5, AS3, CS6, AS2, AS3, C6, AS2, AS3, FS6,

FS6, AS3, F5, AS2, AS3, FS5, AS2, AS3, GS5, AS2, AS3, AS5, AS2, AS3, B5, AS2,
B5, B3, DS5, GS2, B3, F5, GS2, B3, FS5, GS2, B4, AS5, GS2, B3, B5, GS2,
B5, B3, F5, CS3, B3, FS5, CS3, B3, GS5, CS3, GS3, AS5, CS3, GS3, B5, CS3,
B5, AS2, FS3, AS5, AS2, FS3, FS5, AS2, GS5, AS2, FS3, AS5, AS2, FS3, F5, AS2,
FS5, B3, DS5, DS3, B3, F5, DS3, B3, FS5, DS3, B3, AS5, DS3, B3, B5, DS3,
B5, B3, DS5, GS2, B3, F5, GS2, B3, FS5, GS2, B3, AS5, GS2, B3, F6, GS2,
F6, B3, F5, CS3, B3, FS5, CS3, B3, GS5, CS3, B3, AS5, CS3, B3, B5, CS3,
B5, FS2, FS3, AS5, FS2, FS3, GS5, FS3, GS5, FS2, FS3, FS5, FS2, FS3, F5, FS2,
GS5, AS4, F5, AS3, AS4, FS5, AS3, AS4, GS5, AS3, AS4, AS5, AS3, AS4, B5, AS3,
B5, B4, DS5, GS3, B4, F5, GS3, B4, FS5, GS3, B4, AS5, GS3, B4, B5, GS3,
B5, B4, F5, CS4, B4, FS5, CS4, B4, GS5, CS4, B4, AS5, CS4, B4, B5, CS4,
B5, FS4, AS3, AS5, FS4, AS3, FS5, FS4, GS5, AS3, FS4, AS5, AS3, FS4, F5, AS3,

FS5, B4, DS5, DS4, B4, F5, DS4, B4, FS5, DS4, B4, AS5, DS4, B4, B5, DS4,
B5, E4, E5, E3, E4, FS5, E3, E4, GS5, E3, E4, AS5, E3, E4, D6, E3,
D6, B4, F5, AS3, B4, FS5, AS3, B4, GS5, AS3, B4, AS5, AS3, B4, B5, AS3,
B5, AS3, AS4, AS3, AS4, p, AS5, p, AS5, p3, p4,
p4, p4, p4, p4,

DS5, B2, B3, E5, B2, B3, FS5, B3, B5, B2, B3, CS6, B2, B3, DS6, B3,
AS4, FS3, FS4, FS3, AS4, B4, CS5, FS5, FS4, FS3, FS4, CS6, FS3, FS4, DS6, FS3,
DS5, G3, G4, E5, G3, G4, AS5, G4, B5, G3, G4, CS6, G3, G4, DS6, G4,
B5, GS3, GS4, GS3, B4, CS5, DS5, GS5, GS4, GS3, GS4, CS6, GS3, GS4, DS6, GS4,
E6, E3, E4, DS6, E3, E4, E5, E4, FS5, E3, E4, B5, E3, E4, CS6, E4,
B5, B2, B3, B2, DS5, E5, FS5, B5, B2, B3, B2, DS6, B2, B3, E6, B3,
CS6, FS3, FS4, AS5, FS3, FS4, FS5, FS4, CS5, FS3, FS5, AS5, CS6, DS6, E6, FS4,
DS6, B2, B3, B4, B2, B3, B4, B3, B4, B2, B3, B4, B2, B3, B4, B3
};

const byte melody10[] = {
E5, DS5, E4, FS4, B4, CS5, AS3, AS3, B3, CS4, FS4, AS4, DS5,
DS4, E4, AS4, B4, CS5, DS5, B4, B3, CS4, DS4, GS4, CS5, DS5,
E5, DS5, E4, FS4, B4, CS5, B4, DS4, E4, FS4, B4, DS5, E5,
CS5, AS4, FS4, CS4, FS4, GS4, AS4, B4, CS5, B4, p2, p4, p4
};

const PROGMEM byte durations10[] = {
3, 3, 2, 3, 3, 2,  4, 1, 1, 1, 4, 3, 2,
3, 3, 2, 3, 3, 2,  4, 1, 1, 1, 4, 3, 2,
3, 3, 2, 3, 3, 2,  4, 1, 1, 1, 4, 3, 2,
3, 3, 2, 2, 1, 1, 1, 1, 2,  6, 0, 0, 0
};

const PROGMEM byte melody11[] = {
C5, E4, G4, CS5, p2, G5, p, GS5, p2, AS5, p2, C6, p,
CS5, CS4, F4, GS4, F4, G4, GS4, CS5, p4, p4,
AS4, DS4, G4, C5, p2, CS5, p, G5, p2, GS5, p2, AS5, p,
CS6, G4, C6, C5, G4, C5, DS5, G5, p3, GS5, p4,
CS5, GS4, C5, F5, p2, G5, p, GS5, p2, AS5, p2, C6, p,
CS5, CS4, F4, GS4, F4, G4, GS4, CS5, p4, p4,
AS4, G4, AS4, C5, p2, CS5, p, G5, p2, GS5, p2, AS5, p,
CS6, C4, C6, GS4, DS5, GS5, AS5, CS6, p3, C6, p4,

CS6, C4, DS4, C6, p2, CS5, p, DS5, p2, GS5, p2, AS5, p,
G4, G3, AS3, DS4, G4, GS4, AS4, DS5, p4, p4,
C5, G3, AS3, CS5, p2, G5, p, GS5, p2, AS5, p2, C6, p,
GS5, GS3, C4, F4, GS4, AS4, C5, F5, p4, p4,
CS6, F3, GS3, C6, p2, CS5, p, DS5, p2, GS5, p2, AS5, p,
GS5, C4, DS4, GS4, C5, CS5, DS5, GS5, p3, C6, p2, CS6, p,
AS5, G3, AS3, G5, p2, DS5, p3, DS5, F5, G5, GS5, AS5, p,
GS5, GS3, C4, DS4, GS4
};

void melodyProgression(byte* arr, int size) {
  for (int i=0; i<size; i++) {
    byte thatbyte = pgm_read_byte_near(arr + i);
    
    if (thatbyte < 100) {
        tone(3, pitches[thatbyte]);
        delay(notelength);
        noTone(3);
        delay(pauseBetweenNotes);
    } else {
      delay(pauses[thatbyte-100] + pauseBetweenNotes);
    }
  }
}

void melodyDurations(byte* arr, byte* durs, int size) {
  for (int i=0; i<size; i++) {
    if (arr[i] < 100) {
        tone(3, pitches[arr[i]]);
        delay(notelength * pgm_read_byte_near(durs + i));
        noTone(3);
        delay(pauseBetweenNotes);
    } else {
      delay(pauses[arr[i]-100] + pauseBetweenNotes);
    }
  }
}

void setup() {
  pinMode(3, OUTPUT);
  pinMode(13, OUTPUT);

  digitalWrite(13, LOW);
  delay(2000);

  melodyProgression(melody1, sizeof(melody1));

  pauseBetweenNotes = 1;
  notelength = 123;
  
  melodyDurations(melody3, durations3, sizeof(melody3));
  melodyDurations(melody31, durations31, sizeof(melody31));
  
  pauseBetweenNotes = 4;
  notelength = 120;

  melodyProgression(melody4, sizeof(melody4));
  melodyProgression(melody5, sizeof(melody5));

  pauseBetweenNotes = 1;
  notelength = 123;

  // транспонируем в рантайме
  int s = sizeof(melody31); int a01 = 5; int a02 = 12; int a1 = s-22; int a2 = s-13; int a3 = s-6;
  for (int i=0; i<s; i++) {
    if (melody31[i] >=100) continue; // for pauses
    if ((i > a1 && i < a2) || i > a3 || (i > a01 && i < a02)) {
      melody31[i] += 5;
    } else melody31[i] -= 7;
  }

  melodyDurations(melody31, durations31, sizeof(melody31));
  melodyDurations(melody32, durations32, sizeof(melody32));

  pauseBetweenNotes = 4;
  notelength = 120;
  
  melodyProgression(melody6, sizeof(melody6));
  melodyDurations(melody7, durations7, sizeof(melody7));
  notelength*=2; notelength += pauseBetweenNotes;
  melodyProgression(melody8, sizeof(melody8));
  
  notelength -= pauseBetweenNotes; notelength /=2;
  melodyProgression(melody9, sizeof(melody9));

  melodyDurations(melody10, durations10, sizeof(melody10));
  melodyProgression(melody11, sizeof(melody11));
}

void loop() {
}
