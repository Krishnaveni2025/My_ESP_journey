//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A 
//self Assessment set -14 Problem 06
//Display bottom most row all LEDs.


#include "max7219.h"

void setup(void) {
    max7219_init();
    max7219_set_row(8, 0xFF); // Light all LEDs in bottom row (row 8)
}

void loop(void) {
    // Static display
}

int main(void) {
    setup();
    while (1)
        loop();
}

