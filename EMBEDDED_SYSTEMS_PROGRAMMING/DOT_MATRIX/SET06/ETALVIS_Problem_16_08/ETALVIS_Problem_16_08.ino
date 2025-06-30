//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A
//self Assessment set -16 Problem 08
//display "1234" by entering top half from bottom and bottom half from top simulataneously in 3 seconds

#include "max7219.h"
#include "font_digits.h"

void delay_ms(unsigned int ms) {
  for (unsigned int i = 0; i < ms; i++)
    for (volatile int j = 0; j < 1000; j++);
}

void setup(void) {
    max7219_init();

    for (unsigned char step = 0; step < 4; step++) {
        for (unsigned char row = 1; row <= 8; row++) {
            unsigned char d1 = 0, d2 = 0, d3 = 0, d4 = 0;

            // Top half: rows 1–4 enter from bottom
            if (row <= 4 && row >= (4 - step)) {
                d1 = digit1[row - 1];
                d2 = digit2[row - 1];
                d3 = digit3[row - 1];
                d4 = digit4[row - 1];
            }

            // Bottom half: rows 5–8 enter from top
            if (row >= 5 && row <= (5 + step)) {
                d1 = digit1[row - 1];
                d2 = digit2[row - 1];
                d3 = digit3[row - 1];
                d4 = digit4[row - 1];
            }

            max7219_send_row4(row, d4, d3, d2, d1);
        }
        delay_ms(375);  // 3 sec total / 8 steps ≈ 375 ms per step
    }
}

void loop(void) {
  while (1);  // Freeze final frame
}