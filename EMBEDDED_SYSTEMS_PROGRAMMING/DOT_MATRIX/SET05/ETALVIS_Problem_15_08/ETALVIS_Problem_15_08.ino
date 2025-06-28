//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A
//self Assessment set -15 Problem 08
//DISPLAY "1234" by entering from left
#include "max7219.h"
#include "font_digits.h"

void delayStep(void) {
    for (volatile long d = 0; d < 100000; d++);
}

void display1234_LTR() {
    // Step 1: Show '1'
    for (unsigned char row = 1; row <= 8; row++)
        max7219_send_row4(row, digit4[row - 1], 0x00, 0x00, 0x00);
    delayStep();

    // Step 2: Show '1 2'
    for (unsigned char row = 1; row <= 8; row++)
        max7219_send_row4(row, digit4[row - 1], digit3[row - 1], 0x00, 0x00);
    delayStep();

    // Step 3: Show '1 2 3'
    for (unsigned char row = 1; row <= 8; row++)
        max7219_send_row4(row, digit4[row - 1], digit3[row - 1], digit2[row - 1], 0x00);
    delayStep();

    // Step 4: Show '1 2 3 4'
    for (unsigned char row = 1; row <= 8; row++)
        max7219_send_row4(row, digit4[row - 1], digit3[row - 1], digit2[row - 1], digit1[row - 1]);
    delayStep();
}

void setup(void) {
    max7219_init();
    display1234_LTR();
}

void loop(void) {
    while (1); // Hold final display
}
