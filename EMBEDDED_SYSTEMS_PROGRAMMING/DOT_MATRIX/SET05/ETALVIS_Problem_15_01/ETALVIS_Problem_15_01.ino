//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A
//self Assessment set -15 Problem 01
//DISPLAY 1


#include "max7219.h"

void setup(void) {

  max7219_init();
  uint8_t one[8] = {
    0b00010000,
    0b00011000,
    0b00010100,
    0b00010000,
    0b00010000,
    0b00010000,
    0b01111100,
    0b00000000
  };


  for (unsigned char row = 1; row <= 8; row++) {
    max7219_set_row(row, one[row - 1]);
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
