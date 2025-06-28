//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A 
//self Assessment set -14 Problem 09
//Display diagonal all LEDs connecting from left top to right bottom #include "max7219.h"
#include "max7219.h"

void setup(void) {
    max7219_init();
    for (unsigned char row = 1; row <= 8; row++) {
        max7219_set_row(row, 1 << (row - 1)); // Diagonal pattern: bit position matches row index
    }
}
void loop(void) {
    // Static display
}

int main(void) {
    setup();
    while (1)
        loop();
}
