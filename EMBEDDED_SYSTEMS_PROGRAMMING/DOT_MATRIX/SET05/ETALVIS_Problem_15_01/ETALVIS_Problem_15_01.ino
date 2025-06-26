//Embedded Systems programming - GPIO
//Dot Matrix Control Problems
//use max 7219-matrix DOTMATRIX
//use PORT A
//self Assessment set -15 Problem 01
//DISPLAY 1


// Define PORT A and DDR A addresses
volatile char *porta = (volatile char *)0x22; // PORT A (pins 22–29)
volatile char *ddra  = (volatile char *)0x21; // Data Direction Register A

// MAX7219 control line bit positions on PORT A
#define DIN_BIT  0  // PA0 (pin 22)
#define CLK_BIT  1  // PA1 (pin 23)
#define CS_BIT   2  // PA2 (pin 24)

// Function to send 16 bits (address + data) to MAX7219
void sendData(unsigned char address, unsigned char data) {
  unsigned char i;
  unsigned int packet = (address << 8) | data;

  // Start transmission by pulling CS LOW
  *porta &= ~(1 << CS_BIT);

  // Send 16 bits: MSB first
  for (i = 0; i < 16; i++) {
    if (packet & 0x8000)
      *porta |= (1 << DIN_BIT);  // Set DIN HIGH
    else
      *porta &= ~(1 << DIN_BIT); // Set DIN LOW

    *porta &= ~(1 << CLK_BIT);    // CLK LOW
    for (volatile int d = 0; d < 10; d++); // Brief delay
    *porta |= (1 << CLK_BIT);     // CLK HIGH

    packet <<= 1; // Next bit
  }

  // Latch data by setting CS HIGH
  *porta |= (1 << CS_BIT);
}

// Setup function
void setup() {
  *ddra = 0xFF;               // Configure all PORT A pins as outputs
  *porta = (1 << CS_BIT);     // Set CS HIGH initially

  // MAX7219 Initialization sequence
  sendData(0x0C, 0x01); // Shutdown mode: Normal operation
  sendData(0x09, 0x00); // Decode mode: No decode
  sendData(0x0A, 0x08); // Intensity: Medium brightness
  sendData(0x0B, 0x07); // Scan limit: Display all 8 digits
  sendData(0x0F, 0x00); // Display test: Off

  // Clear display initially
  for (unsigned char row = 1; row <= 8; row++) {
    sendData(row, 0x00);
  }

  // Pattern for digit '1'
  unsigned char one[8] = {
    0b00010000,  
    0b00011000, 
    0b00010100,  
    0b00010000,  
    0b00010000,  
    0b00010000,  
    0b01111100,  
    0b00000000  
  };

  // Display the pattern on matrix
  for (unsigned char row = 1; row <= 8; row++) {
    sendData(row, one[row - 1]);
  }
}

void loop() {
  // Nothing to do in loop — static display
}