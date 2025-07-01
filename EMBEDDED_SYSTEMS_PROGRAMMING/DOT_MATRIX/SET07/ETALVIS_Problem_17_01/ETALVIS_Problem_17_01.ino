//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A
//self Assessment set -17 Problem 01
//display "Welcome" by entering from left and leaving by right.
//Revolving the display continuously.
#include "max7219.h"
#include "font_welcome.h"

void delay_ms(unsigned int ms) {
  for (unsigned int i = 0; i < ms; i++)
    for (volatile int j = 0; j < 1000; j++);
}

// Bit-reverse to fix mirror image
unsigned char reverse_bits(unsigned char b) {
  b = (b & 0xF0) >> 4 | (b & 0x0F) << 4;
  b = (b & 0xCC) >> 2 | (b & 0x33) << 2;
  b = (b & 0xAA) >> 1 | (b & 0x55) << 1;
  return b;
}

void setup(void) {
  max7219_init();
  while (1)
  {
    const unsigned char* seq[] = {
      font_W,
      font_E,
      font_L,
      font_C,
      font_O,
      font_M,
      font_E
    };

    const unsigned int frames = sizeof(seq) / sizeof(seq[0]);

    for (unsigned int step = 0; step < frames; step++) {
      for (unsigned char row = 1; row <= 8; row++) {
        unsigned char d[4] = {0};

        for (unsigned int col = 0; col < 4; col++) {
          int idx = step - col;
          if (idx >= 0 && idx < frames) {
            d[col] = reverse_bits(seq[idx][row - 1]);
          }
        }

        // Flip order for left-to-right animation
        max7219_send_row4(row, d[3], d[2], d[1], d[0]);
      }
      delay_ms(250);
    }
  }
}

void loop()
{

}