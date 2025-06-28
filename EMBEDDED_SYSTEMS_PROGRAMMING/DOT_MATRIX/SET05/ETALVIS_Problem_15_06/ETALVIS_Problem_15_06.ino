//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A
//self Assessment set -15 Problem 06
//DISPLAY "ETAL" FOR 10 SECONDS AND CLEAR  screen from right in 3 SECONDS

#include "max7219.h"
#include "font.h"

void delay_step_ms(unsigned int t) {
  for (volatile long d = 0; d < 2000 * t; d++);
}

void display_ETAL(unsigned char visible) {
  for (unsigned char row = 1; row <= 8; row++) {
    unsigned char d1 = (visible >= 4) ? letterL[row - 1] : 0x00;
    unsigned char d2 = (visible >= 3) ? letterA[row - 1] : 0x00;
    unsigned char d3 = (visible >= 2) ? letterT[row - 1] : 0x00;
    unsigned char d4 = (visible >= 1) ? letterE[row - 1] : 0x00;
    max7219_send_row4(row, d1, d2, d3, d4);
  }
}

void setup(void) {
  max7219_init();
  display_ETAL(4); // Full word on
  // Hold ETAL for 10 seconds
  for (int i = 0; i < 10; i++) delay_step_ms(100);

  // Clear one matrix at a time over 3 seconds
for (unsigned char step = 1; step <= 5; step++) {
    display_ETAL(5 - step); // Goes from 4 down to 0
    delay_step_ms(750);
}
}

void loop(void) {


}
