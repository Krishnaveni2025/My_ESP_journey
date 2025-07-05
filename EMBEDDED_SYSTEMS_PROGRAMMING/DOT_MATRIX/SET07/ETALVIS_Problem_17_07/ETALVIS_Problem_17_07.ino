//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A
//self Assessment set -17 Problem 07
//display "ETAL" ON TOP by entering from TOP & display "1234" ON BOTTOM by entering from BOTTOM simultaneously.

// === FONT ARRAYS ===

unsigned char letterE[8] = {0x00, 0x7E, 0x02, 0x02, 0x7E, 0x02, 0x02, 0x7E};
unsigned char letterT[8] = {0x00, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x7C};
unsigned char letterA[8] = {0x00, 0x42, 0x42, 0x42, 0x7E, 0x42, 0x42, 0x3C};
unsigned char letterL[8] = {0x00, 0x7E, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02};

unsigned char digit1[8] = {0x10, 0x18, 0x14, 0x10, 0x10, 0x10, 0x7C, 0x00};
unsigned char digit2[8] = {0x60, 0x90, 0x80, 0x40, 0x20, 0x10, 0xF0, 0x00};
unsigned char digit3[8] = {0x60, 0x90, 0x80, 0x40, 0x80, 0x90, 0x60, 0x00};
unsigned char digit4[8] = {0x10, 0x18, 0x14, 0x12, 0x7E, 0x10, 0x10, 0x00};

// === GPIO DEFINITIONS ===
#define PA_DDR  (*(volatile unsigned char*)0x21)
#define PA_PORT (*(volatile unsigned char*)0x22)
#define SET(x)   (PA_PORT |=  (1 << (x)))
#define CLR(x)   (PA_PORT &= ~(1 << (x)))

// === UTILITY FUNCTIONS ===
void delay_ms(unsigned int ms) {
  for (unsigned int i = 0; i < ms; i++)
    for (volatile int j = 0; j < 1000; j++);
}

void pulse(unsigned char clk) {
  CLR(clk); delay_ms(1); SET(clk);
}

void send_bit(unsigned char din, unsigned char bit) {
  bit ? SET(din) : CLR(din);
}

void send16(unsigned char din, unsigned char clk, unsigned short data) {
  for (char i = 15; i >= 0; i--) {
    send_bit(din, (data >> i) & 1);
    pulse(clk);
  }
}

void send_row(unsigned char din, unsigned char clk, unsigned char cs,
              unsigned char row,
              unsigned char d1, unsigned char d2,
              unsigned char d3, unsigned char d4) {
  CLR(cs);
  send16(din, clk, (row << 8) | d4);
  send16(din, clk, (row << 8) | d3);
  send16(din, clk, (row << 8) | d2);
  send16(din, clk, (row << 8) | d1);
  SET(cs);
}

void max7219_init_chain(unsigned char din, unsigned char clk, unsigned char cs) {
  send_row(din, clk, cs, 0x0C, 1, 1, 1, 1); // Normal mode
  send_row(din, clk, cs, 0x09, 0, 0, 0, 0); // No decode
  send_row(din, clk, cs, 0x0A, 8, 8, 8, 8); // Intensity
  send_row(din, clk, cs, 0x0B, 7, 7, 7, 7); // Scan all digits
  send_row(din, clk, cs, 0x0F, 0, 0, 0, 0); // No test mode

  for (unsigned char r = 1; r <= 8; r++)
    send_row(din, clk, cs, r, 0, 0, 0, 0);
}

// === MAIN ===
int main(void) {
  PA_DDR = 0b00111111;  // Set PA0–PA5 as outputs

  max7219_init_chain(0, 1, 2); // Top matrices: ETAL
  max7219_init_chain(3, 4, 5); // Bottom matrices: 1234
  for (char shift = -7; shift <= 0; shift++) {
    for (unsigned char row = 1; row <= 8; row++) {
      signed char index = shift + row - 1;

      // ETAL: scrolls top-down (Matrix rows 1–8)
      unsigned char l = (index >= 0 && index < 8) ? letterL[index] : 0x00;
      unsigned char a = (index >= 0 && index < 8) ? letterA[index] : 0x00;
      unsigned char t = (index >= 0 && index < 8) ? letterT[index] : 0x00;
      unsigned char e = (index >= 0 && index < 8) ? letterE[index] : 0x00;


      send_row(0, 1, 2, 9 - row, l, a, t, e);  // Try this adjustment
      // 1234: scrolls bottom-up (Matrix rows 8→1)
      unsigned char d1 = (index >= 0 && index < 8) ? digit1[index] : 0x00;
      unsigned char d2 = (index >= 0 && index < 8) ? digit2[index] : 0x00;
      unsigned char d3 = (index >= 0 && index < 8) ? digit3[index] : 0x00;
      unsigned char d4 = (index >= 0 && index < 8) ? digit4[index] : 0x00;

      send_row(3, 4, 5,  row, d4, d3, d2, d1);  // Send rows 8→1 to bottom matrices
    }

    delay_ms(100);
  }
}