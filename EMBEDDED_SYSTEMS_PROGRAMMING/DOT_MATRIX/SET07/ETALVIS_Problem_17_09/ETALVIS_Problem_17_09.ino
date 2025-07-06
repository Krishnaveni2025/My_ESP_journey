//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A
//self Assessment set -17 Problem 09
//display "SB" using 16x16 pixel resolution
//after 10 seconds wipe the display from left.
#define PA_DDR  (*(volatile unsigned char*)0x21)
#define PA_PORT (*(volatile unsigned char*)0x22)

#define SET(x)  (PA_PORT |= (1 << (x)))
#define CLR(x)  (PA_PORT &= ~(1 << (x)))

// === Bitmaps for B and S ===
const uint16_t B_16x16[16] = {
  0B0000000000000000,
  0B0001111111000000,
  0B0010000000100000,
  0B0100000000100000,
  0B0100000000100000,
  0B0100000000100000,
  0B0100000000100000,
  0B0011111111100000,
  0B0011111111100000,
  0B0100000000100000,
  0B0100000000100000,
  0B0100000000100000,
  0B0100000000100000,
  0B0010000000100000,
  0B0001111111000000,
  0B0000000000000000
};

const uint16_t S_16x16[16] = {
  0B0000000000000000,
  0B0011111110000000,
  0B0100000001000000,
  0B0100000000100000,
  0B0000000000100000,
  0B0000000000100000,
  0B0000000000100000,
  0B0111111111000000,
  0B0011111111000000,
  0B0100000000000000,
  0B0100000000000000,
  0B0100000000000000,
  0B0100000000100000,
  0B0010000000100000,
  0B0001111111000000,
  0B0000000000000000
};

// === Merged 32-bit SB Bitmap ===
const uint32_t SB_16x32[16] = {
  ((uint32_t)B_16x16[0] << 16)  | S_16x16[0],
  ((uint32_t)B_16x16[1] << 16)  | S_16x16[1],
  ((uint32_t)B_16x16[2] << 16)  | S_16x16[2],
  ((uint32_t)B_16x16[3] << 16)  | S_16x16[3],
  ((uint32_t)B_16x16[4] << 16)  | S_16x16[4],
  ((uint32_t)B_16x16[5] << 16)  | S_16x16[5],
  ((uint32_t)B_16x16[6] << 16)  | S_16x16[6],
  ((uint32_t)B_16x16[7] << 16)  | S_16x16[7],
  ((uint32_t)B_16x16[8] << 16)  | S_16x16[8],
  ((uint32_t)B_16x16[9] << 16)  | S_16x16[9],
  ((uint32_t)B_16x16[10] << 16) | S_16x16[10],
  ((uint32_t)B_16x16[11] << 16) | S_16x16[11],
  ((uint32_t)B_16x16[12] << 16) | S_16x16[12],
  ((uint32_t)B_16x16[13] << 16) | S_16x16[13],
  ((uint32_t)B_16x16[14] << 16) | S_16x16[14],
  ((uint32_t)B_16x16[15] << 16) | S_16x16[15]
};
uint32_t screenBuffer[16];  // Mutable buffer for wipe effect
// === Delay ===
void delay_ms(unsigned int ms) {
  for (unsigned int i = 0; i < ms; i++)
    for (volatile unsigned int j = 0; j < 1000; j++);
}

// === Pulse + Bit Send ===
void pulse(unsigned char clk) {
  CLR(clk); delay_ms(1); SET(clk);
}

void send_bit(unsigned char din, unsigned char val) {
  val ? SET(din) : CLR(din);
}

void send16(unsigned char din, unsigned char clk, uint16_t data) {
  for (char i = 15; i >= 0; i--) {
    send_bit(din, (data >> i) & 1);
    pulse(clk);
  }
}

// === Send Row to One Chain of 4 Matrices ===
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
void wipe_left_to_right() {
  // Copy original image to buffer
  for (unsigned char i = 0; i < 16; i++)
    screenBuffer[i] = SB_16x32[i];

  for (uint8_t step = 0; step < 32; step++) {
    for (uint8_t row = 0; row < 8; row++) {
      uint32_t line = screenBuffer[row];
      send_row(0, 1, 2, row + 1,
               (line >> 24) & 0xFF,
               (line >> 16) & 0xFF,
               (line >> 8) & 0xFF,
               line & 0xFF);
    }

    for (uint8_t row = 0; row < 8; row++) {
      uint32_t line = screenBuffer[row + 8];
      send_row(3, 4, 5, row + 1,
               (line >> 24) & 0xFF,
               (line >> 16) & 0xFF,
               (line >> 8) & 0xFF,
               line & 0xFF);
    }

    // Shift everything left by 1
    for (uint8_t r = 0; r < 16; r++)
      screenBuffer[r] <<= 1;

    delay_ms(200);  // Control wipe speed
  }
}
// === Initialization Function ===
void max7219_init_chain(unsigned char din, unsigned char clk, unsigned char cs) {
  send_row(din, clk, cs, 0x0F, 0, 0, 0, 0);
  send_row(din, clk, cs, 0x0C, 1, 1, 1, 1);
  send_row(din, clk, cs, 0x0B, 7, 7, 7, 7);
  send_row(din, clk, cs, 0x09, 0, 0, 0, 0);
  send_row(din, clk, cs, 0x0A, 8, 8, 8, 8);
  for (unsigned char i = 1; i <= 8; i++)
    send_row(din, clk, cs, i, 0, 0, 0, 0);
}

// === Display SB on 16x32 ===
void display_SB_16x32() {
  for (unsigned char row = 0; row < 8; row++) {
    uint32_t line = SB_16x32[row];
    send_row(0, 1, 2, row + 1,
             (line >> 24) & 0xFF,
             (line >> 16) & 0xFF,
             (line >> 8)  & 0xFF,
             line & 0xFF);
  }

  for (unsigned char row = 0; row < 8; row++) {
    uint32_t line = SB_16x32[row + 8];
    send_row(3, 4, 5, row + 1,
             (line >> 24) & 0xFF,
             (line >> 16) & 0xFF,
             (line >> 8)  & 0xFF,
             line & 0xFF);
  }
}

int main(void) {
  PA_DDR = 0b00111111;  // PA0–PA5 = output

  max7219_init_chain(0, 1, 2);
  max7219_init_chain(3, 4, 5);

  display_SB_16x32();    // Show "SB"
  for (uint16_t i = 0; i < 10000; i++) delay_ms(1);  // Wait 10 sec

  wipe_left_to_right();  // Wipe the display
  while (1);
}