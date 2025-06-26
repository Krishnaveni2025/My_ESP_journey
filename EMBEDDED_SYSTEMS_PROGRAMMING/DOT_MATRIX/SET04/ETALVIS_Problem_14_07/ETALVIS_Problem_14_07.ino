//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A 
//self Assessment set -14 Problem 07
//Display left most column all LEDs.

volatile char *porta = (volatile char *)0x22; // PORT A (pins 22–29)
volatile char *ddra = (volatile char *)0x21;  // DDRA for PORT A

// MAX7219 pin assignments on PORT A
#define DIN_BIT 0  // PA0 (pin 22) for DIN
#define CLK_BIT 1  // PA1 (pin 23) for CLK
#define CS_BIT  2  // PA2 (pin 24) for CS

// Function to send 16-bit data to MAX7219
void sendData(unsigned char address, unsigned char data) {
  unsigned char i;
  unsigned int packet = (address << 8) | data; // Combine address and data

  // Set CS LOW to start transfer
  *porta &= ~(1 << CS_BIT);

  // Send 16 bits (address + data)
  for (i = 0; i < 16; i++) {
    // Set DIN (0 or 1)
    if (packet & 0x8000) {
      *porta |= (1 << DIN_BIT);  // DIN HIGH
    } else {
      *porta &= ~(1 << DIN_BIT); // DIN LOW
    }
    // Pulse CLK
    *porta &= ~(1 << CLK_BIT); // CLK LOW
    for (volatile int d = 0; d < 10; d++); // Short delay
    *porta |= (1 << CLK_BIT);  // CLK HIGH
    packet <<= 1; // Shift to next bit
  }

  // Set CS HIGH to latch data
  *porta |= (1 << CS_BIT);
}

void setup() {
  // Set PORT A pins as outputs
  *ddra = 0xFF; // All PORT A pins (22–29) as outputs
  *porta = (1 << CS_BIT); // CS HIGH initially, others LOW

  // Initialize MAX7219
  sendData(0x0C, 0x01); // Shutdown: normal mode
  sendData(0x09, 0x00); // Decode mode: no decode
  sendData(0x0A, 0x08); // Intensity: medium (0x00–0x0F)
  sendData(0x0B, 0x07); // Scan limit: all 8 rows
  sendData(0x0F, 0x00); // Display test: off

  // Clear all rows (set to 0x00, all LEDs off)
  for (unsigned char row = 1; row <= 8; row++) {
    sendData(row, 0x00);
  }


}

void loop() {
  for (unsigned char row = 1; row <= 8; row++) {
    sendData(row, 0b00000001); // Refresh column 1 for each row
  }
  
}
