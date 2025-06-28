//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A
//self Assessment set -15 Problem 02
//DISPLAY 12

#include "max7219.h"

// Digit '1'
unsigned char digit1[8] = {
  0b00010000,
  0b00011000,
  0b00010100,
  0b00010000,
  0b00010000,
  0b00010000,
  0b01111100,
  0b00000000
};

// Digit '2'
unsigned char digit2[8] = {
  0b01100000,
  0b10010000,
  0b10000000,
  0b01000000,
  0b00100000,
  0b00010000,
  0b11110000,
  0b00000000
};

void setup(void) {
  max7219_init();

  for (unsigned char row = 1; row <= 8; row++) {
    max7219_send_dual(row, digit2[row - 1], digit1[row - 1]); 
    // chip1 (left) = digit2, chip2 (right) = digit1
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
