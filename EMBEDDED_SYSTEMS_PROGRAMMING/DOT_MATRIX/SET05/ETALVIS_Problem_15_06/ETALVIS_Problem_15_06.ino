//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A
//self Assessment set -15 Problem 06
//DISPLAY "ETAL" FOR 10 SECONDS AND CLEAR  screen from right in 3 SECONDS

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
  unsigned char data[4] = {d1, d2, d3, d4};  // Left to Right: E, T, A, L

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

unsigned char letterE[8] = {
  0b01111110,  // 0b01111110 → unchanged (mirror is itself)
  0b00000010,
  0b00000010,
  0b01111110,
  0b00000010,
  0b00000010,
  0b01111110,
  0b00000000
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

// === Display "ETAL" ===
void setup() {
  initMAX7219();

  for (unsigned char row = 1; row <= 8; row++) {
    sendFourMatrices(row,
                     letterE[row - 1],  // Matrix 4 → L (Rightmost)
                     letterT[row - 1],  // Matrix 3 → A
                     letterA[row - 1],  // Matrix 2 → T
                     letterL[row - 1]   // Matrix 1 → E (Leftmost)
                    );
  }
}
void delayStep() {
  for (volatile long d = 0; d < 100000; d++);  // crude delay
}

void display_ETAL_partial(unsigned char visible) {
  for (unsigned char row = 1; row <= 8; row++) {
    unsigned char d1 = (visible >= 4) ? letterL[row - 1] : 0x00; // Matrix 1 → L
    unsigned char d2 = (visible >= 3) ? letterA[row - 1] : 0x00; // Matrix 2 → A
    unsigned char d3 = (visible >= 2) ? letterT[row - 1] : 0x00; // Matrix 3 → T
    unsigned char d4 = (visible >= 1) ? letterE[row - 1] : 0x00; // Matrix 4 → E
    sendFourMatrices(row, d4, d3, d2, d1);
  }
}
void loop() {
  while (1)
  {
    display_ETAL_partial(4);  // ETAL
    delayStep();

    display_ETAL_partial(3);  // ETA
    delayStep();

    display_ETAL_partial(2);  // ET
    delayStep();

    display_ETAL_partial(1);  // E
    delayStep();

    display_ETAL_partial(0);  // Clear All
    delayStep();
  }


}