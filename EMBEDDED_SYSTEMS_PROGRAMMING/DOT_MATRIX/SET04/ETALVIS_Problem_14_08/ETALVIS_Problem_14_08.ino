//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A 
//self Assessment set -14 Problem 08
//Display right most column all LEDs.


#include "max7219.h"

void setup(void) {
    max7219_init();
    for (unsigned char row = 1; row <= 8; row++) {
        max7219_set_row(row, 0x80); // Only bit 7 ON → rightmost column
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
