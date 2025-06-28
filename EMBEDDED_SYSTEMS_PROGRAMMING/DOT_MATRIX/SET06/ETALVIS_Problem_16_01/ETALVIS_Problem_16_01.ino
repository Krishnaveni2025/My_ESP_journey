//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A
//self Assessment set -16 Problem 01
//DISPLAY "ETAL" by entering from bottom in 3 seconds , stay for 10 seconds and leaving by left in 4 seconds

#include "max7219.h"
#include "font_ETAL.h"

void delay_ms(unsigned int ms) {
    for (unsigned int i = 0; i < ms; i++)
        for (volatile int j = 0; j < 1000; j++);
}

void setup(void) {
    max7219_init();

    // 1️⃣ Bottom-up Entry Animation (3 seconds → 8 steps)
    for (char shift = -7; shift <= 0; shift++) {
        for (unsigned char row = 1; row <= 8; row++) {
            char index = shift + row - 1;

            unsigned char e = (index >= 0 && index < 8) ? letterE[index] : 0x00;
            unsigned char t = (index >= 0 && index < 8) ? letterT[index] : 0x00;
            unsigned char a = (index >= 0 && index < 8) ? letterA[index] : 0x00;
            unsigned char l = (index >= 0 && index < 8) ? letterL[index] : 0x00;

            max7219_send_row4(row, l, a, t, e);
        }
        delay_ms(375); // ~3 sec total
    }

    // 2️⃣ Static Display for 10 seconds
    delay_ms(10000);

    // 3️⃣ Leftward Exit Animation (4 seconds → 4 steps)
    for (char step = 0; step <= 4; step++) {
        for (unsigned char row = 1; row <= 8; row++) {
            unsigned char m1 = 0x00, m2 = 0x00, m3 = 0x00, m4 = 0x00;

            if (step == 0)      { m1 = letterE[row - 1]; m2 = letterT[row - 1]; m3 = letterA[row - 1]; m4 = letterL[row - 1]; }
            else if (step == 1) { m1 = letterT[row - 1]; m2 = letterA[row - 1]; m3 = letterL[row - 1]; }
            else if (step == 2) { m1 = letterA[row - 1]; m2 = letterL[row - 1]; }
            else if (step == 3) { m1 = letterL[row - 1]; }

            max7219_send_row4(row, m4, m3, m2, m1);
        }
        delay_ms(1000); // ~4 sec total
    }
}

void loop(void) {
    while (1); // Freeze on final frame
}
