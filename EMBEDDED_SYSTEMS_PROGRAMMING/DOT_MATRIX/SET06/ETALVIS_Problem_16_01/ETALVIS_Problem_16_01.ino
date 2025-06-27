//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A
//self Assessment set -16 Problem 01
//DISPLAY "ETAL" by entering from bottom in 3 seconds , stay for 10 seconds and leaving by left in 4 seconds

// === PORTA Register Mapping ===
volatile char *porta = (volatile char *)0x22;
volatile char *ddra  = (volatile char *)0x21;

// === MAX7219 Pin Positions on PORTA ===
#define DIN_BIT  0  // PA0 → DIN
#define CLK_BIT  1  // PA1 → CLK
#define CS_BIT   2  // PA2 → CS

// === Function to Send 4 Chained Commands (One Row Per Matrix) ===
void sendFourMatrices(unsigned char addr, unsigned char d4, unsigned char d3,
                      unsigned char d2, unsigned char d1) {
  unsigned char data[4] = {d1, d2, d3, d4};  // Left to Right: Matrix 1, 2, 3, 4

  *porta &= ~(1 << CS_BIT);

  for (char m = 3; m >= 0; m--) {
    unsigned int packet = (addr << 8) | data[m];
    for (char i = 0; i < 16; i++) {
      if (packet & 0x8000)
        *porta |= (1 << DIN_BIT);
      else
        *porta &= ~(1 << DIN_BIT);

      *porta &= ~(1 << CLK_BIT);
      for (volatile int d = 0; d < 10; d++);
      *porta |= (1 << CLK_BIT);
      packet <<= 1;
    }
  }

  *porta |= (1 << CS_BIT);
}

// === Letter Definitions (Oriented for Bottom-to-Top, Index 0 = Top, Index 7 = Bottom) ===
unsigned char letterE[8] = {
  0b01111110,  // Row 1 (physical top, mapped to row 8)
  0b00000010,
  0b00000010,
  0b01111110,
  0b00000010,
  0b00000010,
  0b01111110,
  0b00000000   // Row 8 (physical bottom, mapped to row 1)
};

unsigned char letterT[8] = {
  0b01111100,
  0b00010000,
  0b00010000,
  0b00010000,
  0b00010000,
  0b00010000,
  0b00010000,
  0b00000000
};

unsigned char letterA[8] = {
  0b00111100,
  0b01000010,
  0b01000010,
  0b01111110,
  0b01000010,
  0b01000010,
  0b01000010,
  0b00000000
};

unsigned char letterL[8] = {
  0b00000010,
  0b00000010,
  0b00000010,
  0b00000010,
  0b00000010,
  0b00000010,
  0b01111110,
  0b00000000
};

// === MAX7219 Initialization ===
void initMAX7219() {
  *ddra = 0xFF;
  *porta = (1 << CS_BIT);

  for (char i = 0; i < 4; i++) {
    sendFourMatrices(0x0C, 0x01, 0x01, 0x01, 0x01); // Normal operation
    sendFourMatrices(0x09, 0x00, 0x00, 0x00, 0x00); // No decode
    sendFourMatrices(0x0A, 0x08, 0x08, 0x08, 0x08); // Intensity
    sendFourMatrices(0x0B, 0x07, 0x07, 0x07, 0x07); // Scan limit
    sendFourMatrices(0x0F, 0x00, 0x00, 0x00, 0x00); // Test mode off
  }

  // Clear all displays
  for (unsigned char row = 1; row <= 8; row++)
    sendFourMatrices(row, 0x00, 0x00, 0x00, 0x00);
}

// === Delay Function for Animation ===
void delay_ms(unsigned int ms) {
  for (unsigned int i = 0; i < ms; i++)
    for (volatile int j = 0; j < 1000; j++); // Adjust based on your MCU clock
}

// === Display "ETAL" with Bottom-to-Top Entry, Static, and Left Shift Exit ===
void setup() {
  initMAX7219();

  // Entry: Shift letters in from the bottom (4 seconds, 8 steps)
  for (char shift = -7; shift <= 0; shift++) {
    for (unsigned char row = 1; row <= 8; row++) {
      unsigned char e_data = (shift + row - 1 >= 0 && shift + row - 1 < 8) ? letterE[shift + row - 1] : 0x00;
      unsigned char t_data = (shift + row - 1 >= 0 && shift + row - 1 < 8) ? letterT[shift + row - 1] : 0x00;
      unsigned char a_data = (shift + row - 1 >= 0 && shift + row - 1 < 8) ? letterA[shift + row - 1] : 0x00;
      unsigned char l_data = (shift + row - 1 >= 0 && shift + row - 1 < 8) ? letterL[shift + row - 1] : 0x00;

      sendFourMatrices(row, e_data, t_data, a_data, l_data);
    }
    delay_ms(500); // 4000 ms / 8 steps = 500 ms per step
  }

  // Static display for 10 seconds
  delay_ms(10000);

  // Exit: Shift letters left one by one (3 seconds, 4 steps)
  for (char step = 0; step <= 4; step++) {
    for (unsigned char row = 1; row <= 8; row++) {
      unsigned char m1_data = 0x00; // Matrix 1 (leftmost)
      unsigned char m2_data = 0x00; // Matrix 2
      unsigned char m3_data = 0x00; // Matrix 3
      unsigned char m4_data = 0x00; // Matrix 4 (rightmost)

      if (step == 0) {
        m1_data = letterE[row - 1];
        m2_data = letterT[row - 1];
        m3_data = letterA[row - 1];
        m4_data = letterL[row - 1];
      } else if (step == 1) {
        m1_data = letterT[row - 1];
        m2_data = letterA[row - 1];
        m3_data = letterL[row - 1];
      } else if (step == 2) {
        m1_data = letterA[row - 1];
        m2_data = letterL[row - 1];
      } else if (step == 3) {
        m1_data = letterL[row - 1];
      }

      sendFourMatrices(row, m1_data, m2_data, m3_data, m4_data);
    }
    delay_ms(750); // 3000 ms / 4 steps = 750 ms per step
  }
}

void loop() {
  // Static display after animation (optional, can restart with setup(); if desired)
}