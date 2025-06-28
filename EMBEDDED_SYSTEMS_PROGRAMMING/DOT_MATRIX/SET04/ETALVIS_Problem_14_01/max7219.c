#include "max7219.h"

volatile char *porta = (volatile char *)0x22;
volatile char *ddra  = (volatile char *)0x21;

#define DIN_BIT 0
#define CLK_BIT 1
#define CS_BIT  2

void max7219_send(unsigned char address, unsigned char data) {
    unsigned int packet = (address << 8) | data;
    *porta &= ~(1 << CS_BIT); // CS LOW

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

    *porta |= (1 << CS_BIT); // CS HIGH
}

void max7219_init(void) {
    *ddra = 0xFF;
    *porta = (1 << CS_BIT);

    max7219_send(0x0C, 0x01);
    max7219_send(0x09, 0x00);
    max7219_send(0x0A, 0x08);
    max7219_send(0x0B, 0x07);
    max7219_send(0x0F, 0x00);
    max7219_clear();
}

void max7219_clear(void) {
    for (unsigned char row = 1; row <= 8; row++)
        max7219_send(row, 0x00);
}

void max7219_display_pixel(unsigned char row, unsigned char col) {
    if (row >= 1 && row <= 8 && col >= 1 && col <= 8) {
        max7219_send(row, 1 << (8 - col));
    }
}