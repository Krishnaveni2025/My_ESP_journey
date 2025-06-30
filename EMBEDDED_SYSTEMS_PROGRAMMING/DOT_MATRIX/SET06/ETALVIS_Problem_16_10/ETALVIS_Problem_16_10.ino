//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A
//self Assessment set -16 Problem 10
//display "1234" by entering '12' from right and '34' from  left simultaneously in 4 seconds

#include "max7219.h"
#include "font_digits.h"  // digit1, digit2, digit3, digit4

void delay_ms(unsigned int ms) {
    for (unsigned int i = 0; i < ms; i++)
        for (volatile int j = 0; j < 1000; j++);
}


void setup(void) {
    max7219_init();

    // Step 1: Partial display (only 2 and 3 appear)
    for (unsigned char row = 1; row <= 8; row++) {
        unsigned char d4 = digit2[row - 1];                    // Matrix 1 empty
        unsigned char d1 = digit3[row - 1];         // Matrix 2 → 2
        unsigned char d2 = 0x00;                    // Matrix 3 empty
        unsigned char d3 = 0x00;         // Matrix 4 → 3

        max7219_send_row4(row, d1, d2, d3, d4);
    }
    delay_ms(1000);  // Hold intermediate frame

    // Step 2: Full display [1][2][3][4]
    for (unsigned char row = 1; row <= 8; row++) {
        unsigned char d1 = digit1[row - 1];
        unsigned char d2 = digit2[row - 1];
        unsigned char d3 = digit3[row - 1];
        unsigned char d4 = digit4[row - 1];

        max7219_send_row4(row, d4, d3, d2, d1);
    }
}
void loop()
{

}