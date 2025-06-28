//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A 
//self Assessment set -14 Problem 01
//Display rightmost top LED.

#include "max7219.h"

void setup(void) {
    max7219_init();
    max7219_display_pixel(1, 1);  // Top-right LED (row 1, column 1)
}

void loop(void) {
    // Static display
}

int main(void) {
    setup();
    while (1)
        loop();
}
