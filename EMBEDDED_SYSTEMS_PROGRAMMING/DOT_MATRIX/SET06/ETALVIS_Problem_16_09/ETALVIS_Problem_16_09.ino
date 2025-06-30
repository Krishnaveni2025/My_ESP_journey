//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A
//self Assessment set -16 Problem 09
//display "1234" by entering all 4 directions simultaneously in 3 seconds
#include "max7219.h"
#include "font_digits.h"

void delay_ms(unsigned int ms) {
    for (unsigned int i = 0; i < ms; i++)
        for (volatile int j = 0; j < 1000; j++);
}

unsigned char mask_from_left(unsigned char data, unsigned char step) {
    return data & (0xFF << (8 - step));
}

unsigned char mask_from_right(unsigned char data, unsigned char step) {
    return data & (0xFF >> (8 - step));
}

unsigned char mask_from_top(unsigned char *digit, unsigned char row, unsigned char step) {
    return (row <= step) ? digit[row - 1] : 0x00;
}

unsigned char mask_from_bottom(unsigned char *digit, unsigned char row, unsigned char step) {
    return (9 - row <= step) ? digit[row - 1] : 0x00;
}

void setup(void) {
    max7219_init();

    for (unsigned char step = 1; step <= 8; step++) {
        for (unsigned char row = 1; row <= 8; row++) {
            unsigned char d1 = mask_from_left(digit1[row - 1], step);
            unsigned char d2 = mask_from_top(digit2, row, step);
            unsigned char d3 = mask_from_bottom(digit3, row, step);
            unsigned char d4 = mask_from_right(digit4[row - 1], step);

            max7219_send_row4(row, d4, d3, d2, d1);
        }
        delay_ms(375); // 3 sec / 8 steps
    }
}
void loop()
{

}