//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A
//self Assessment set -15 Problem 05
//DISPLAY 1234
#include "max7219.h"
#include "font.h"

void setup(void) {
  max7219_init();

  for (unsigned char row = 1; row <= 8; row++) {
    max7219_send_all(row,

                     digit4[row - 1],   // Rightmost: 'L'
                     digit3[row - 1],  // Then 'A'
                     digit2[row - 1],  // Then 'T'
                     digit1[row - 1]  // Leftmost: 'E'
                    );

  }
}
void loop() {
  // Static display — nothing to animate (yet!)
}
