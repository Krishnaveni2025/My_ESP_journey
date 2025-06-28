//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A
//self Assessment set -15 Problem 10
//DISPLAY "1234" by entering from bottom


#include "max7219.h"
#include "font_digits.h"

void delay_ms(unsigned int ms) {
    for (unsigned int i = 0; i < ms; i++)
        for (volatile int j = 0; j < 1000; j++);
}

void setup(void) {
    max7219_init();

    for (char shift = -7; shift <= 0; shift++) {
        for (unsigned char row = 1; row <= 8; row++) {
            char index = shift + row - 1;

            unsigned char d1 = (index >= 0 && index < 8) ? digit1[index] : 0x00;
            unsigned char d2 = (index >= 0 && index < 8) ? digit2[index] : 0x00;
            unsigned char d3 = (index >= 0 && index < 8) ? digit3[index] : 0x00;
            unsigned char d4 = (index >= 0 && index < 8) ? digit4[index] : 0x00;

            max7219_send_row4(row, d4, d3, d2, d1);
        }
        delay_ms(100); // Tune animation speed
    }
}

void loop(void) {
    while (1); // Hold final display
}
