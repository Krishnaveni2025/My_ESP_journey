//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A
//self Assessment set -15 Problem 02
//DISPLAY 12

// === Register Mapping ===
volatile char *porta = (volatile char *)0x22;  // PORTA data register
volatile char *ddra  = (volatile char *)0x21;  // PORTA direction register

// === MAX7219 Pin Assignments (PORTA) ===
#define DIN_BIT  0  // PA0 → DIN
#define CLK_BIT  1  // PA1 → CLK
#define CS_BIT   2  // PA2 → CS

// === Function to Send 16 Bits (Address + Data) to One MAX7219 ===
void shiftOut16(unsigned char address1, unsigned char data1, unsigned char address2, unsigned char data2) {
  unsigned int packet1 = (address1 << 8) | data1;
  unsigned int packet2 = (address2 << 8) | data2;

  *porta &= ~(1 << CS_BIT);  // Begin transmission

  // First send data to Matrix 2 (rightmost)
  for (char i = 0; i < 16; i++) {
    if (packet2 & 0x8000)
      *porta |= (1 << DIN_BIT);
    else
      *porta &= ~(1 << DIN_BIT);

    *porta &= ~(1 << CLK_BIT);
    for (volatile int d = 0; d < 10; d++);
    *porta |= (1 << CLK_BIT);
    packet2 <<= 1;
  }

  // Then send data to Matrix 1 (leftmost)
  for (char i = 0; i < 16; i++) {
    if (packet1 & 0x8000)
      *porta |= (1 << DIN_BIT);
    else
      *porta &= ~(1 << DIN_BIT);

    *porta &= ~(1 << CLK_BIT);
    for (volatile int d = 0; d < 10; d++);
    *porta |= (1 << CLK_BIT);
    packet1 <<= 1;
  }

  *porta |= (1 << CS_BIT); // Latch both packets
}

// === MAX7219 Initialization ===
void initMAX7219() {
  for (char device = 0; device < 2; device++) {
    shiftOut16(0x0C, 0x01, 0x0C, 0x01); // Normal operation
    shiftOut16(0x09, 0x00, 0x09, 0x00); // No decode
    shiftOut16(0x0A, 0x08, 0x0A, 0x08); // Medium intensity
    shiftOut16(0x0B, 0x07, 0x0B, 0x07); // Scan all rows
    shiftOut16(0x0F, 0x00, 0x0F, 0x00); // Test mode off
  }

  // Clear both displays
  for (unsigned char row = 1; row <= 8; row++) {
    shiftOut16(row, 0x00, row, 0x00);
  }
}
  // Pattern for digit '1'
  unsigned char digit1[8] =
  {
    0b00010000,
    0b00011000,
    0b00010100,
    0b00010000,
    0b00010000,
    0b00010000,
    0b01111100,
    0b00000000
  };

  unsigned char digit2[8] = {
    0b01100000,
    0b10010000,
    0b10000000,
    0b01000000,
    0b00100000,
    0b00010000,
    0b11111000,
    0b00000000
  };

// === Arduino-style setup ===
void setup() {
  *ddra = 0xFF;
  *porta = (1 << CS_BIT);

  initMAX7219();

  // Display digit 1 on Matrix 1 (left) and digit 2 on Matrix 2 (right)
  for (unsigned char row = 1; row <= 8; row++) {
    shiftOut16(row, digit2[row - 1], row, digit1[row - 1]);
  }
}

void loop() {
  // Static display; nothing needed here
}