//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A 
//self Assessment set -14 Problem 03
//Display RIGHTmost BOTTOM LED.


#include "max7219.h"

void setup(void) {
    max7219_init();
    max7219_display_pixel(8, 1);  // RIGHT most BOTTOM LED (row 8, column 8)
}

void loop(void) {
    // Static display
}

int main(void) {
    setup();
    while (1)
        loop();
}
