//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A
//self Assessment set -15 Problem 08
//DISPLAY "1234" by entering from left
// === PORTA Register Mapping ===
volatile char *porta = (volatile char *)0x22;
volatile char *ddra  = (volatile char *)0x21;

#define DIN_BIT  0
#define CLK_BIT  1
#define CS_BIT   2

void delayStep() {
  for (volatile long d = 0; d < 100000; d++);  // Crude delay
}

// === Send to Four Chained Matrices ===
void sendFourMatrices(unsigned char addr, unsigned char d4, unsigned char d3,
                      unsigned char d2, unsigned char d1) {
  unsigned char data[4] = {d1, d2, d3, d4};  // d1 → Matrix 1, d4 → Matrix 4

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

// === Digit Bitmaps (LSB-first)
unsigned char digit1[8] = {
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
  0b11110000,
  0b00000000
};

unsigned char digit3[8] = {
  0b01100000,
  0b10010000,
  0b10000000,
  0b01000000,
  0b10000000,
  0b10010000,
  0b01100000,
  0b00000000
};

unsigned char digit4[8] = {
  0b00010000,
  0b00011000,
  0b00010100,
  0b00010010,
  0b01111110,
  0b00010000,
  0b00010000,
  0b00000000
};

// === MAX7219 Initialization ===
void initMAX7219() {
  *ddra = 0xFF;
  *porta = (1 << CS_BIT);

  for (char i = 0; i < 4; i++) {
    sendFourMatrices(0x0C, 0x01, 0x01, 0x01, 0x01);
    sendFourMatrices(0x09, 0x00, 0x00, 0x00, 0x00);
    sendFourMatrices(0x0A, 0x08, 0x08, 0x08, 0x08);
    sendFourMatrices(0x0B, 0x07, 0x07, 0x07, 0x07);
    sendFourMatrices(0x0F, 0x00, 0x00, 0x00, 0x00);
  }

  for (unsigned char row = 1; row <= 8; row++)
    sendFourMatrices(row, 0x00, 0x00, 0x00, 0x00);
}

// === Animate 1234 Left to Right ===
void display1234_LTR() {
  // Step 1: Matrix 1 → '1'
  for (unsigned char row = 1; row <= 8; row++)
    sendFourMatrices(row, 0x00, 0x00, 0x00, digit1[row - 1]);
  delayStep();

  // Step 2: Matrix 1 → '1', Matrix 2 → '2'
  for (unsigned char row = 1; row <= 8; row++)
    sendFourMatrices(row, 0x00, 0x00, digit1[row - 1], digit2[row - 1]);
  delayStep();

  // Step 3: Matrix 1 → '1', Matrix 2 → '2', Matrix 3 → '3'
  for (unsigned char row = 1; row <= 8; row++)
    sendFourMatrices(row, 0x00, digit1[row - 1], digit2[row - 1], digit3[row - 1]);
  delayStep();

  // Step 4: Full 1234
  for (unsigned char row = 1; row <= 8; row++)
    sendFourMatrices(row, digit1[row - 1], digit2[row - 1], digit3[row - 1], digit4[row - 1]);
  delayStep();
}

void setup() {
  initMAX7219();
  display1234_LTR();
}

void loop() {
  while (1);  // Freeze after animation
}