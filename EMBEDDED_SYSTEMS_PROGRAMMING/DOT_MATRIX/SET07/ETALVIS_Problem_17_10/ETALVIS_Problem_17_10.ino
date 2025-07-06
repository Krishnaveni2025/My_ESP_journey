//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A
//self Assessment set -17 Problem 10
//glow diagonal LEDs one by one on 32x32 display.

// === Port A (Top Half) ===
#define PA_DDR  (*(volatile unsigned char*)0x21)
#define PA_PORT (*(volatile unsigned char*)0x22)

// === Port K (Bottom Half) ===
#define PK_DDR  (*(volatile unsigned char*)0x107)
#define PK_PORT (*(volatile unsigned char*)0x108)

// === Delay ===
void delay_ms(unsigned int ms) {
  for (unsigned int i = 0; i < ms; i++)
    for (volatile unsigned int j = 0; j < 1000; j++);
}

// === CLR/SET Functions for Port A ===
void CLRA_fn(unsigned char x) { PA_PORT &= ~(1 << x); }
void SETA_fn(unsigned char x) { PA_PORT |=  (1 << x); }

// === CLR/SET Functions for Port K ===
void CLRK_fn(unsigned char x) { PK_PORT &= ~(1 << x); }
void SETK_fn(unsigned char x) { PK_PORT |=  (1 << x); }

// === Send 1 Bit + Clock Pulse ===
void pulse(unsigned char clk, void (*CLR)(unsigned char), void (*SET)(unsigned char)) {
  CLR(clk); delay_ms(1); SET(clk);
}

void send_bit(unsigned char din, unsigned char val,
              void (*CLR)(unsigned char), void (*SET)(unsigned char)) {
  val ? SET(din) : CLR(din);
}

// === Send 16 Bits MSB First ===
void send16(unsigned char din, unsigned char clk, uint16_t data,
            void (*CLR)(unsigned char), void (*SET)(unsigned char)) {
  for (char i = 15; i >= 0; i--) {
    send_bit(din, (data >> i) & 1, CLR, SET);
    pulse(clk, CLR, SET);
  }
}

// === Send 1 Row (4 matrices) ===
void send_row(unsigned char din, unsigned char clk, unsigned char cs, unsigned char row,
              unsigned char d1, unsigned char d2, unsigned char d3, unsigned char d4,
              void (*CLR)(unsigned char), void (*SET)(unsigned char)) {
  CLR(cs);
  send16(din, clk, (row << 8) | d4, CLR, SET);
  send16(din, clk, (row << 8) | d3, CLR, SET);
  send16(din, clk, (row << 8) | d2, CLR, SET);
  send16(din, clk, (row << 8) | d1, CLR, SET);
  SET(cs);
}

// === Initialize 1 Chain ===
void max7219_init(unsigned char din, unsigned char clk, unsigned char cs,
                  void (*CLR)(unsigned char), void (*SET)(unsigned char)) {
  send_row(din, clk, cs, 0x0F, 0, 0, 0, 0, CLR, SET);  // Test off
  send_row(din, clk, cs, 0x0C, 1, 1, 1, 1, CLR, SET);  // Shutdown off
  send_row(din, clk, cs, 0x0B, 7, 7, 7, 7, CLR, SET);  // Scan limit
  send_row(din, clk, cs, 0x09, 0, 0, 0, 0, CLR, SET);  // No decode
  send_row(din, clk, cs, 0x0A, 8, 8, 8, 8, CLR, SET);  // Intensity
  for (unsigned char i = 1; i <= 8; i++)
    send_row(din, clk, cs, i, 0, 0, 0, 0, CLR, SET);   // Clear all
}

// === Display 1 Full Row (32 bits) ===
void display_row(uint8_t row_idx, uint32_t row_data,
                 unsigned char din, unsigned char clk, unsigned char cs,
                 void (*CLR)(unsigned char), void (*SET)(unsigned char)) {
  send_row(din, clk, cs, row_idx,
           (row_data >> 24) & 0xFF,
           (row_data >> 16) & 0xFF,
           (row_data >> 8)  & 0xFF,
            row_data        & 0xFF,
           CLR, SET);
}

// === MAIN ===
int main(void) {
  // Set Port A and Port K as output
  PA_DDR = 0b00111111;
  PK_DDR = 0b00111111;

  // Init all 4 matrix stacks
  max7219_init(0, 1, 2, CLRA_fn, SETA_fn);   // Top-Left
  max7219_init(3, 4, 5, CLRA_fn, SETA_fn);   // Top-Right
  max7219_init(0, 1, 2, CLRK_fn, SETK_fn);   // Bottom-Left
  max7219_init(3, 4, 5, CLRK_fn, SETK_fn);   // Bottom-Right

  // Diagonal animation
  const uint32_t DIAGONAL[32] = {
    0b10000000000000000000000000000000,
    0b01000000000000000000000000000000,
    0b00100000000000000000000000000000,
    0b00010000000000000000000000000000,
    0b00001000000000000000000000000000,
    0b00000100000000000000000000000000,
    0b00000010000000000000000000000000,
    0b00000001000000000000000000000000,
    0b00000000100000000000000000000000,
    0b00000000010000000000000000000000,
    0b00000000001000000000000000000000,
    0b00000000000100000000000000000000,
    0b00000000000010000000000000000000,
    0b00000000000001000000000000000000,
    0b00000000000000100000000000000000,
    0b00000000000000010000000000000000,
    0b00000000000000001000000000000000,
    0b00000000000000000100000000000000,
    0b00000000000000000010000000000000,
    0b00000000000000000001000000000000,
    0b00000000000000000000100000000000,
    0b00000000000000000000010000000000,
    0b00000000000000000000001000000000,
    0b00000000000000000000000100000000,
    0b00000000000000000000000010000000,
    0b00000000000000000000000001000000,
    0b00000000000000000000000000100000,
    0b00000000000000000000000000010000,
    0b00000000000000000000000000001000,
    0b00000000000000000000000000000100,
    0b00000000000000000000000000000010,
    0b00000000000000000000000000000001
  };

  for (uint8_t i = 0; i < 32; i++) {
    uint32_t line = DIAGONAL[i];
    if (i < 8)
      display_row(i + 1, line, 0, 1, 2, CLRA_fn, SETA_fn);
    else if (i < 16)
      display_row(i - 7, line, 3, 4, 5, CLRA_fn, SETA_fn);
    else if (i < 24)
      display_row(i - 15, line, 0, 1, 2, CLRK_fn, SETK_fn);
    else
      display_row(i - 23, line, 3, 4, 5, CLRK_fn, SETK_fn);

    delay_ms(200);
  }

  while (1);
}