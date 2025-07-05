//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A
//self Assessment set -17 Problem 05
//display "ETAL" ON TOP AND "1234" ON BOTTOM.


// === FONT ARRAYS ===
unsigned char letterE[8] = {
  0b01111110, 0b00000010, 0b00000010, 0b01111110,
  0b00000010, 0b00000010, 0b01111110, 0b00000000
};

unsigned char letterT[8] = {
  0b01111100, 0b00010000, 0b00010000, 0b00010000,
  0b00010000, 0b00010000, 0b00010000, 0b00000000
};

unsigned char letterA[8] = {
  0b00111100, 0b01000010, 0b01000010, 0b01111110,
  0b01000010, 0b01000010, 0b01000010, 0b00000000
};

unsigned char letterL[8] = {
  0b00000010, 0b00000010, 0b00000010, 0b00000010,
  0b00000010, 0b00000010, 0b01111110, 0b00000000
};

unsigned char digit1[8] = {
  0b00010000, 0b00011000, 0b00010100, 0b00010000,
  0b00010000, 0b00010000, 0b01111100, 0b00000000
};

unsigned char digit2[8] = {
  0b01100000, 0b10010000, 0b10000000, 0b01000000,
  0b00100000, 0b00010000, 0b11110000, 0b00000000
};

unsigned char digit3[8] = {
  0b01100000, 0b10010000, 0b10000000, 0b01000000,
  0b10000000, 0b10010000, 0b01100000, 0b00000000
};

unsigned char digit4[8] = {
  0b00010000, 0b00011000, 0b00010100, 0b00010010,
  0b01111110, 0b00010000, 0b00010000, 0b00000000
};

// === GPIO ADDRESSES ===
#define PA_DDR  (*(volatile unsigned char*)0x21)
#define PA_PORT (*(volatile unsigned char*)0x22)

// === MACROS (no shift/bit) ===
#define SET0(p) (p |= 0x01)
#define SET1(p) (p |= 0x02)
#define SET2(p) (p |= 0x04)
#define SET3(p) (p |= 0x08)
#define SET4(p) (p |= 0x10)
#define SET5(p) (p |= 0x20)

#define CLR0(p) (p &= ~0x01)
#define CLR1(p) (p &= ~0x02)
#define CLR2(p) (p &= ~0x04)
#define CLR3(p) (p &= ~0x08)
#define CLR4(p) (p &= ~0x10)
#define CLR5(p) (p &= ~0x20)

// === UTILITY ===
void delay1() {
  for (volatile int i = 0; i < 100; i++);
}

void pulse(unsigned char clk) {
  if (clk == 0) { CLR0(PA_PORT); delay1(); SET0(PA_PORT); }
  else if (clk == 1) { CLR1(PA_PORT); delay1(); SET1(PA_PORT); }
  else if (clk == 2) { CLR2(PA_PORT); delay1(); SET2(PA_PORT); }
  else if (clk == 3) { CLR3(PA_PORT); delay1(); SET3(PA_PORT); }
  else if (clk == 4) { CLR4(PA_PORT); delay1(); SET4(PA_PORT); }
  else if (clk == 5) { CLR5(PA_PORT); delay1(); SET5(PA_PORT); }
}

void set_pin(unsigned char pin) {
  if (pin == 0) SET0(PA_PORT);
  else if (pin == 1) SET1(PA_PORT);
  else if (pin == 2) SET2(PA_PORT);
  else if (pin == 3) SET3(PA_PORT);
  else if (pin == 4) SET4(PA_PORT);
  else if (pin == 5) SET5(PA_PORT);
}

void clr_pin(unsigned char pin) {
  if (pin == 0) CLR0(PA_PORT);
  else if (pin == 1) CLR1(PA_PORT);
  else if (pin == 2) CLR2(PA_PORT);
  else if (pin == 3) CLR3(PA_PORT);
  else if (pin == 4) CLR4(PA_PORT);
  else if (pin == 5) CLR5(PA_PORT);
}

void send16(unsigned char din, unsigned char clk, unsigned short data) {
  for (char i = 15; i >= 0; i--) {
    if (data & (1 << i)) set_pin(din);
    else clr_pin(din);
    pulse(clk);
  }
}

void send_row(unsigned char din, unsigned char clk, unsigned char cs,
              unsigned char row,
              unsigned char d1, unsigned char d2,
              unsigned char d3, unsigned char d4) {
  clr_pin(cs);
  send16(din, clk, (row << 8) | d4);
  send16(din, clk, (row << 8) | d3);
  send16(din, clk, (row << 8) | d2);
  send16(din, clk, (row << 8) | d1);
  set_pin(cs);
}

void max7219_init(unsigned char din, unsigned char clk, unsigned char cs) {
  send_row(din, clk, cs, 0x0C, 1,1,1,1);
  send_row(din, clk, cs, 0x09, 0,0,0,0);
  send_row(din, clk, cs, 0x0A, 8,8,8,8);
  send_row(din, clk, cs, 0x0B, 7,7,7,7);
  send_row(din, clk, cs, 0x0F, 0,0,0,0);
  for (unsigned char i = 1; i <= 8; i++)
    send_row(din, clk, cs, i, 0, 0, 0, 0);
}

// === MAIN ===
int main(void) {
  PA_DDR = 0b00111111;  // Set PA0–PA5 as output

  max7219_init(0, 1, 2); // Top chain: ETAL
  max7219_init(3, 4, 5); // Bottom chain: 1234

  for (unsigned char r = 1; r <= 8; r++) {
    send_row(0,1,2, r,  // top display
      letterL[r-1],
      letterA[r-1],
      letterT[r-1],
      letterE[r-1]);

    send_row(3,4,5, r,  // bottom display
      digit4[r-1],
      digit3[r-1],
      digit2[r-1],
      digit1[r-1]);
  }

  while(1);
}