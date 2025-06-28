//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A
//self Assessment set -15 Problem 07
//DISPLAY "ETAL" by entering from right

#include "max7219.h"
#include "font.h"

void delay_step_ms(unsigned int t) {
    for (volatile long d = 0; d < 2000 * t; d++);
}

void display_build_ETAL(unsigned char step) {
    for (unsigned char row = 1; row <= 8; row++) {
        unsigned char d1 = (step >= 4) ? letterE[row - 1] : 0x00;
        unsigned char d2 = (step >= 3) ? letterT[row - 1] : 0x00;
        unsigned char d3 = (step >= 2) ? letterA[row - 1] : 0x00;
        unsigned char d4 = (step >= 1) ? letterL[row - 1] : 0x00;

        max7219_send_row4(row, d4, d3, d2, d1); // Left to right: E T A L
    }
}

void setup(void) {
    max7219_init();
}

void loop(void) {
    for (unsigned char step = 1; step <= 4; step++) {
        display_build_ETAL(step);
        delay_step_ms(1000); // 1 second per stage
    }

    while (1); // Hold full ETAL display
}
