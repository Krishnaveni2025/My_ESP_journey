#include "max7219.h"

volatile char *porta = (volatile char *)0x22;
volatile char *ddra  = (volatile char *)0x21;

#define DIN_BIT 0
#define CLK_BIT 1
#define CS_BIT  2

void max7219_send_dual(unsigned char address, unsigned char data1, unsigned char data2) {
    unsigned int packet1 = (address << 8) | data1;
    unsigned int packet2 = (address << 8) | data2;

    *porta &= ~(1 << CS_BIT);

    // Send to rightmost device first (data2), then leftmost (data1)
    for (int i = 0; i < 16; i++) {
        if (packet2 & 0x8000) *porta |= (1 << DIN_BIT); else *porta &= ~(1 << DIN_BIT);
        *porta &= ~(1 << CLK_BIT);
        for (volatile int d = 0; d < 10; d++);
        *porta |= (1 << CLK_BIT);
        packet2 <<= 1;
    }

    for (int i = 0; i < 16; i++) {
        if (packet1 & 0x8000) *porta |= (1 << DIN_BIT); else *porta &= ~(1 << DIN_BIT);
        *porta &= ~(1 << CLK_BIT);
        for (volatile int d = 0; d < 10; d++);
        *porta |= (1 << CLK_BIT);
        packet1 <<= 1;
    }

    *porta |= (1 << CS_BIT);
}

void max7219_init(void) {
    *ddra = 0xFF;
    *porta = (1 << CS_BIT);

    for (int i = 0; i < 2; i++) {  // Configure both chips
        max7219_send_dual(0x0C, 0x01, 0x01); // Normal operation
        max7219_send_dual(0x09, 0x00, 0x00); // No decode
        max7219_send_dual(0x0A, 0x08, 0x08); // Medium intensity
        max7219_send_dual(0x0B, 0x07, 0x07); // Scan all 8 digits
        max7219_send_dual(0x0F, 0x00, 0x00); // Test mode off
    }

    max7219_clear();
}

void max7219_clear(void) {
    for (unsigned char row = 1; row <= 8; row++) {
        max7219_send_dual(row, 0x00, 0x00);
    }
}
