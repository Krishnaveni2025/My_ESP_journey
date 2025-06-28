//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A 
//self Assessment set -14 Problem 10
//Display diagonal all LEDs coonnecting from  left bottom  to top right
#include "max7219.h"

void setup(void) {
    max7219_init();
    for (unsigned char row = 1; row <= 8; row++) {
        max7219_set_row(row, 1 << (8 - row)); // Bit shifts right → left across rows
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
