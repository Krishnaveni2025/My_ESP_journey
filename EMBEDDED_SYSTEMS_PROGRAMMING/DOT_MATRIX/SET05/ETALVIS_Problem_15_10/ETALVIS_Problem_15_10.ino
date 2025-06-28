//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A
//self Assessment set -15 Problem 09
//DISPLAY "ETAL" by entering from top

#include "max7219.h"

// ETAL Letter Bitmaps (top to bottom animation)
unsigned char letterE[8] = {
    0b00000000,
    0b01111110,
    0b00000010,
    0b00000010,
    0b01111110,
    0b00000010,
    0b00000010,
    0b01111110
};

unsigned char letterT[8] = {
    0b00000000,
    0b00010000,
    0b00010000,
    0b00010000,
    0b00010000,
    0b00010000,
    0b00010000,
    0b01111100
};

unsigned char letterA[8] = {
    0b00000000,
    0b01000010,
    0b01000010,
    0b01000010,
    0b01111110,
    0b01000010,
    0b01000010,
    0b00111100
};

unsigned char letterL[8] = {
    0b00000000,
    0b01111110,
    0b00000010,
    0b00000010,
    0b00000010,
    0b00000010,
    0b00000010,
    0b00000010
};

void delay_ms(unsigned int ms) {
    for (unsigned int i = 0; i < ms; i++)
        for (volatile int j = 0; j < 1000; j++);
}

void setup(void) {
    max7219_init();

    // Animate ETAL entering from the top row by row
    for (char shift = -7; shift <= 0; shift++) {
        for (unsigned char row = 1; row <= 8; row++) {
            signed char index = shift + row - 1;

            unsigned char e = (index >= 0 && index < 8) ? letterE[index] : 0x00;
            unsigned char t = (index >= 0 && index < 8) ? letterT[index] : 0x00;
            unsigned char a = (index >= 0 && index < 8) ? letterA[index] : 0x00;
            unsigned char l = (index >= 0 && index < 8) ? letterL[index] : 0x00;

            max7219_send_row4(9 - row, l, a, t, e);  // Send from top to bottom
        }
        delay_ms(100);  // Adjust animation speed
    }
}

void loop(void) {
    while (1); // Hold final display
}
