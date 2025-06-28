//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A
//self Assessment set -15 Problem 04
//DISPLAY ETAL
#include "max7219.h"
#include "font.h"

void setup(void) {
  max7219_init();

  for (unsigned char row = 1; row <= 8; row++) {
    max7219_send_all(row,

                     letterL[row - 1],   // Rightmost: 'L'
                     letterA[row - 1],  // Then 'A'
                     letterT[row - 1],  // Then 'T'
                     letterE[row - 1]  // Leftmost: 'E'
                    );

  }
}
void loop() {
  // Static display — nothing to animate (yet!)
}
