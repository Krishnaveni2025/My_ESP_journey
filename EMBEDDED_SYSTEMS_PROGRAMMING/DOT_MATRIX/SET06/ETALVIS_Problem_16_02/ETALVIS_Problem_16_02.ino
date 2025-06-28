//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A
//self Assessment set -16 Problem 02
//DISPLAY "ETAL" by entering from TOP in 3 seconds , stay for 10 seconds and leaving by RIGHT in 4 seconds

#include "max7219.h"
#include "font_ETAL.h"

void delay_ms(unsigned int ms) {
  for (unsigned int i = 0; i < ms; i++)
    for (volatile int j = 0; j < 1000; j++);
}

void setup(void) {
  max7219_init();

  // 1️⃣ Entry: Top-to-bottom animation (8 steps × 375 ms = 3 seconds)
  for (char shift = -7; shift <= 0; shift++) {
    for (unsigned char row = 1; row <= 8; row++) {
      char idx = shift + row - 1;

      unsigned char e = (idx >= 0 && idx < 8) ? letterE[idx] : 0x00;
      unsigned char t = (idx >= 0 && idx < 8) ? letterT[idx] : 0x00;
      unsigned char a = (idx >= 0 && idx < 8) ? letterA[idx] : 0x00;
      unsigned char l = (idx >= 0 && idx < 8) ? letterL[idx] : 0x00;

      max7219_send_row4(9 - row, l, a, t, e);  // Left to right: E T A L
    }
    delay_ms(375);
  }

  // 2️⃣ Hold full display for 10 seconds
  delay_ms(10000);

  // 3️⃣ Exit: Shift rightward in 4 steps (4 × 1000 ms = 4 seconds)
  for (unsigned char step = 0; step < 4; step++) {
    for (unsigned char row = 1; row <= 8; row++) {
      unsigned char m1 = 0x00, m2 = 0x00, m3 = 0x00, m4 = 0x00;

      if (step == 0){
        m1 = letterE[row - 1];
        m2 = letterT[row - 1];
        m3 = letterA[row - 1];
        m4 = letterL[row - 1];
      }
      else if (step == 1) {
        m2 = letterE[row - 1];
        m3 = letterT[row - 1];
        m4 = letterA[row - 1];
      }
      else if (step == 2) {
        m3 = letterE[row - 1];
        m4 = letterT[row - 1];
      }
      else if (step == 3) {
        m4 = letterE[row - 1];
      }

      max7219_send_row4(9 - row, m4, m3, m2, m1);
      
    }
    delay_ms(1000);
  }
  max7219_clear_all();
}

void loop(void) {
  while (1); // Freeze final frame
}
