//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A
//self Assessment set -17 Problem 03
//display "Welc" by entering from top and leaving by left.
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


}
void loop()
{
  // STEP 1: Top-down letter reveal
  for (unsigned char step = 1; step <= 8; step++) {
    for (unsigned char row = 1; row <= 8; row++) {
      unsigned char d1 = (row <= step) ? reverse_bits(font_W[row - 1]) : 0x00;
      unsigned char d2 = (row <= step) ? reverse_bits(font_E[row - 1]) : 0x00;
      unsigned char d3 = (row <= step) ? reverse_bits(font_L[row - 1]) : 0x00;
      unsigned char d4 = (row <= step) ? reverse_bits(font_C[row - 1]) : 0x00;
      max7219_send_row4(row, d4, d3, d2, d1);
    }
    delay_ms(200);
  }

  // STEP 2: LEFT horizontal scroll (exit)
  unsigned char W[8], E[8], L[8], C[8];
  for (unsigned char i = 0; i < 8; i++) {
    C[i] = reverse_bits(font_C[i]);
    L[i] = reverse_bits(font_L[i]);

    E[i] = reverse_bits(font_E[i]);
    W[i] = reverse_bits(font_W[i]);
  }

  // Exit scroll: shift columns LEFT
  for (unsigned char shift = 1; shift <= 8; shift++) {
    for (unsigned char row = 1; row <= 8; row++) {
      max7219_send_row4(row,
                        C[row - 1] >> shift,
                        L[row - 1] >> shift,
                        E[row - 1] >> shift,
                        W[row - 1] >> shift);
    }
    delay_ms(150);
  }
  // Optional: fully blank after exit
  for (unsigned char row = 1; row <= 8; row++) {
    max7219_send_row4(row, 0, 0, 0, 0);
  }
}