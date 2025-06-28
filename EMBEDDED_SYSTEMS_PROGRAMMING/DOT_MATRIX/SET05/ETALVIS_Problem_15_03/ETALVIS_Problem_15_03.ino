//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A
//self Assessment set -15 Problem 03
//DISPLAY SB

#include "max7219.h"

// Letter 'S'
unsigned char letterS[8] = {
  0b00111100,
  0b01000010,
  0b00000010,
  0b00111100,
  0b01000000,
  0b01000010,
  0b00111100,
  0b00000000
};

// Letter 'B'
unsigned char letterB[8] = {
  0b00111110,
  0b01000010,
  0b01000010,
  0b00111110,
  0b01000010,
  0b01000010,
  0b00111110,
  0b00000000
};

void setup(void) {
  max7219_init();

  for (unsigned char row = 1; row <= 8; row++) {
    max7219_send_dual(row, letterB[row - 1], letterS[row - 1]); 
    // chip1 (left) = letterS, chip2 (right) = letterB
  }
}

void loop(void) {
  // Static display
}

int main(void) {
  setup();
  while (1)
    loop();
}
