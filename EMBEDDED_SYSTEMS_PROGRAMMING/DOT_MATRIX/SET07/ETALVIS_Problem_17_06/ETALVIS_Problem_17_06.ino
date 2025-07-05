//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A
//self Assessment set -17 Problem 06
//display "ETAL" ON TOP by entering from Right & display "1234" ON BOTTOM by entering from left simultaneously.

// === FONT ARRAYS ===
unsigned char letterE[8] = {0x7E,0x02,0x02,0x7E,0x02,0x02,0x7E,0x00};
unsigned char letterT[8] = {0x7C,0x10,0x10,0x10,0x10,0x10,0x10,0x00};
unsigned char letterA[8] = {0x3C,0x42,0x42,0x7E,0x42,0x42,0x42,0x00};
unsigned char letterL[8] = {0x02,0x02,0x02,0x02,0x02,0x02,0x7E,0x00};

unsigned char digit1[8] = {0x10,0x18,0x14,0x10,0x10,0x10,0x7C,0x00};
unsigned char digit2[8] = {0x60,0x90,0x80,0x40,0x20,0x10,0xF0,0x00};
unsigned char digit3[8] = {0x60,0x90,0x80,0x40,0x80,0x90,0x60,0x00};
unsigned char digit4[8] = {0x10,0x18,0x14,0x12,0x7E,0x10,0x10,0x00};

// === GPIO REGISTERS ===
#define PA_DDR  (*(volatile unsigned char*)0x21)
#define PA_PORT (*(volatile unsigned char*)0x22)

// === PIN MACROS ===
#define SET(x) (PA_PORT |= (1 << (x)))
#define CLR(x) (PA_PORT &= ~(1 << (x)))

// === DELAY ===
void delay_step_ms(volatile long count) {
  for (volatile long i = 0; i < count; i++);
}

// === PULSE & I/O ===
void pulse(unsigned char clk) { CLR(clk); delay_step_ms(100); SET(clk); }
void send_bit(unsigned char din, unsigned char bit) { bit ? SET(din) : CLR(din); }

void send16(unsigned char din, unsigned char clk, unsigned short data) {
  for (char i = 15; i >= 0; i--) {
    send_bit(din, (data >> i) & 1);
    pulse(clk);
  }
}

void send_row(unsigned char din, unsigned char clk, unsigned char cs,
              unsigned char row, unsigned char d1, unsigned char d2,
              unsigned char d3, unsigned char d4) {
  CLR(cs);
  send16(din, clk, (row << 8) | d4);
  send16(din, clk, (row << 8) | d3);
  send16(din, clk, (row << 8) | d2);
  send16(din, clk, (row << 8) | d1);
  SET(cs);
}

void max7219_init_chain(unsigned char din, unsigned char clk, unsigned char cs) {
  send_row(din, clk, cs, 0x0C, 1,1,1,1);
  send_row(din, clk, cs, 0x09, 0,0,0,0);
  send_row(din, clk, cs, 0x0A, 8,8,8,8);
  send_row(din, clk, cs, 0x0B, 7,7,7,7);
  send_row(din, clk, cs, 0x0F, 0,0,0,0);
  for (unsigned char row = 1; row <= 8; row++)
    send_row(din, clk, cs, row, 0,0,0,0);
}

// === TOP: ETAL from RIGHT ===
void display_build_ETAL(unsigned char step) {
  for (unsigned char row = 1; row <= 8; row++) {
    unsigned char d1 = (step == 4) ? letterE[row - 1] : 0;
    unsigned char d2 = (step >= 3) ? letterT[row - 1] : 0;
    unsigned char d3 = (step >= 2) ? letterA[row - 1] : 0;
    unsigned char d4 = (step >= 1) ? letterL[row - 1] : 0;

    send_row(0,1,2, row, d4, d3, d2, d1);
  }
}

// === BOTTOM: 1234 from LEFT ===
void display_build_1234(unsigned char step) {
  for (unsigned char row = 1; row <= 8; row++) {
    unsigned char d1 = digit1[row - 1];
    unsigned char d2 = (step >= 2) ? digit2[row - 1] : 0;
    unsigned char d3 = (step >= 3) ? digit3[row - 1] : 0;
    unsigned char d4 = (step >= 4) ? digit4[row - 1] : 0;

    send_row(3,4,5, row, d4, d3, d2, d1);
  }
}

// === SETUP & LOOP ===
void setup(void) {
  PA_DDR = 0b00111111;
  max7219_init_chain(0,1,2);  // top
  max7219_init_chain(3,4,5);  // bottom
}

void loop(void) {
  for (unsigned char step = 1; step <= 4; step++) {
    display_build_ETAL(step);
    display_build_1234(step);
    delay_step_ms(80000);
  }

  while (1);
}