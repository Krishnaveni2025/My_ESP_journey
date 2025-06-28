//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A
//self Assessment set -16 Problem 03
//DISPLAY "ETAL" by entering from RIGHT in 2 seconds , stay for 10 seconds and leaving by TOP in 4 seconds

#include "max7219.h"
#include "font_ETAL.h"

void delay_ms(unsigned int ms) {
    for (unsigned int i = 0; i < ms; i++)
        for (volatile int j = 0; j < 1000; j++);
}

void setup(void) {
    max7219_init();

    // 1️⃣ Entry: Right-to-left letter reveal (2 sec = 8 steps × 250 ms)
    for (char step = 0; step <= 7; step++) {
        for (unsigned char row = 1; row <= 8; row++) {
            unsigned char m1 = 0, m2 = 0, m3 = 0, m4 = 0;

            if (step == 0)          { m1 = letterE[row - 1]; }
            else if (step == 1)     { m1 = letterE[row - 1]; m2 = letterT[row - 1]; }
            else if (step == 2)     { m1 = letterE[row - 1]; m2 = letterT[row - 1]; m3 = letterA[row - 1]; }
            else if (step >= 3)     { m1 = letterE[row - 1]; m2 = letterT[row - 1]; m3 = letterA[row - 1]; m4 = letterL[row - 1]; }

            max7219_send_row4(row, m4, m3, m2, m1);
        }
        delay_ms(250);
    }

    // 2️⃣ Hold for 10 seconds
    delay_ms(10000);

    // 3️⃣ Exit: Shift upward (from bottom to top, 4 sec = 8 steps × 500 ms)
    for (char shift = 0; shift <= 7; shift++) {
        for (unsigned char row = 1; row <= 8; row++) {
            unsigned char idx = row - 1 + shift;
            unsigned char e = (idx < 8) ? letterE[idx] : 0;
            unsigned char t = (idx < 8) ? letterT[idx] : 0;
            unsigned char a = (idx < 8) ? letterA[idx] : 0;
            unsigned char l = (idx < 8) ? letterL[idx] : 0;

            max7219_send_row4(row, l, a, t, e);
        }
        delay_ms(500);
    }
}

void loop(void) {
    while (1);
}
