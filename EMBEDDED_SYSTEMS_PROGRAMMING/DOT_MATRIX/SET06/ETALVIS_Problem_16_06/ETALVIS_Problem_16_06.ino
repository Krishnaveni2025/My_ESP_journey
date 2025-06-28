//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A
//self Assessment set -16 Problem 06
//DISPLAY "1234" by entering '12' from LEFT and '34' from right simultaneously in three seconds.

#include "max7219.h"
#include "font_digits.h" // Includes digit1, digit2, digit3, digit4

void delay_ms(unsigned int ms) {
    for (unsigned int i = 0; i < ms; i++)
        for (volatile int j = 0; j < 1000; j++);
}

void setup(void) {
    max7219_init();

    // Entry animation: left (1,2) and right (3,4) in sync (3 sec = 8 steps)
    for (unsigned char step = 0; step <= 7; step++) {
        for (unsigned char row = 1; row <= 8; row++) {
            unsigned char m1 = 0, m2 = 0, m3 = 0, m4 = 0;

            if (step == 0) {
                m1 = digit3[row - 1];
                m4 = digit2[row - 1];
            } else if (step == 1) {
                m1 = digit4[row - 1];
                m2 = digit3[row - 1];
                m4 = digit2[row - 1];
            } else {
                m1 = digit4[row - 1];
                m2 = digit3[row - 1];
                m3 = digit2[row - 1];
                m4 = digit1[row - 1];
            }

            max7219_send_row4(row, m1, m2, m3, m4);
        }
        delay_ms(375); // 3000 ms / 8 = 375 ms per frame
    }
}

void loop(void) {
    while (1); // Hold final "1234"
}