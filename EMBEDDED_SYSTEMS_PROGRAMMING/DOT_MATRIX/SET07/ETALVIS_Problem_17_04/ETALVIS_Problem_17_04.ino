//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A
//self Assessment set -17 Problem 04
//display "Welc" by entering from BOTTOM and leaving by RIGHT.
//Revolving the display continuously.


#include "max7219.h"
#include "font_welcome.h"

unsigned char reverse_bits(unsigned char b) {
  b = (b & 0xF0) >> 4 | (b & 0x0F) << 4;
  b = (b & 0xCC) >> 2 | (b & 0x33) << 2;
  b = (b & 0xAA) >> 1 | (b & 0x55) << 1;
  return b;
}

void delay_ms(unsigned int ms) {
  for (unsigned int i = 0; i < ms; i++)
    for (volatile int j = 0; j < 1000; j++);
}

void setup(void) {
  max7219_init();

  // STEP 1: Enter from Bottom → Top (row 8 up to 1)
  for (unsigned char step = 8; step >= 1; step--) {
    for (unsigned char row = 1; row <= 8; row++) {
      unsigned char show = (row >= step) ? 1 : 0;
      max7219_send_row4(row,
                        show ? reverse_bits(font_C[row - 1]) : 0x00,
                        show ? reverse_bits(font_L[row - 1]) : 0x00,
                        show ? reverse_bits(font_E[row - 1]) : 0x00,
                        show ? reverse_bits(font_W[row - 1]) : 0x00);
    }
    delay_ms(200);
    if (step == 1) break; // Prevent underflow on unsigned char
  }

  delay_ms(500); // Pause on full display

  // STEP: Diagonal exit (letters shift left, one per frame)
  for (unsigned char step = 0; step <= 4; step++) {
    for (unsigned char row = 1; row <= 8; row++) {
      unsigned char d1 = (step == 0) ? reverse_bits(font_W[row - 1]) :
                         (step == 1) ? 0x00 :
                         (step == 2) ? 0x00 :
                         (step == 3) ? 0x00 : 0x00;

      unsigned char d2 = (step <= 1) ? reverse_bits(font_E[row - 1]) :
                         (step == 2) ? 0x00 :
                         (step == 3) ? 0x00 : 0x00;

      unsigned char d3 = (step <= 2) ? reverse_bits(font_L[row - 1]) :
                         (step == 3) ? 0x00 : 0x00;

      unsigned char d4 = (step <= 3) ? reverse_bits(font_C[row - 1]) : 0x00;

      max7219_send_row4(row, d4, d3, d2, d1);
    }
    delay_ms(200);
  }
}
void loop()
{

}