//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A
//self Assessment set -16 Problem 04
//DISPLAY "ETAL" by entering from LEFT in 2 seconds , stay for 10 seconds and leaving by BOTTOM in 4 seconds

#include "max7219.h"
#include "font_ETAL.h"

void delay_ms(unsigned int ms) {
    for (unsigned int i = 0; i < ms; i++)
        for (volatile int j = 0; j < 1000; j++);
}

void setup(void) {
    max7219_init();

    // 1️⃣ Enter from left (2 seconds = 8 steps × 250 ms)
    for (char step = 0; step <= 7; step++) {
        for (unsigned char row = 1; row <= 8; row++) {
            unsigned char m1 = 0, m2 = 0, m3 = 0, m4 = 0;

            if (step == 0)          { m1 = letterL[row - 1]; }
            else if (step == 1)     { m1 = letterA[row - 1]; m2 = letterL[row - 1]; }
            else if (step == 2)     { m1 = letterT[row - 1]; m2 = letterA[row - 1]; m3 = letterL[row - 1]; }
            else if (step >= 3)     { m1 = letterE[row - 1]; m2 = letterT[row - 1]; m3 = letterA[row - 1]; m4 = letterL[row - 1]; }

            max7219_send_row4(row, m4, m3, m2, m1); // Left to right: E T A L
        }
        delay_ms(250);
    }

    // 2️⃣ Hold for 10 seconds
    delay_ms(10000);

    // 3️⃣ Exit downward (bottom) over 4 seconds = 8 shifts × 500 ms
    for (char shift = 0; shift < 8; shift++) {
        for (unsigned char row = 1; row <= 8; row++) {
            char idx = row - 1 - shift;
            unsigned char e = (idx >= 0 && idx < 8) ? letterE[idx] : 0x00;
            unsigned char t = (idx >= 0 && idx < 8) ? letterT[idx] : 0x00;
            unsigned char a = (idx >= 0 && idx < 8) ? letterA[idx] : 0x00;
            unsigned char l = (idx >= 0 && idx < 8) ? letterL[idx] : 0x00;

            max7219_send_row4(row, l, a, t, e);
        }
        delay_ms(500);
    }
    max7219_clear_all();
}

void loop(void) {
    while (1); // Freeze after animation
}
