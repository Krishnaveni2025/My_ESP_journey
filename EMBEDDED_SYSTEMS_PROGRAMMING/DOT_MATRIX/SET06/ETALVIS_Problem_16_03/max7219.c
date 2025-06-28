#include "max7219.h"

volatile char *porta = (volatile char *)0x22;
volatile char *ddra  = (volatile char *)0x21;

#define DIN_BIT  0
#define CLK_BIT  1
#define CS_BIT   2

void max7219_send_row4(unsigned char row, unsigned char d1, unsigned char d2,
                       unsigned char d3, unsigned char d4) {
    unsigned char data[4] = {d1, d2, d3, d4};

    *porta &= ~(1 << CS_BIT);
    for (char m = 3; m >= 0; m--) {
        unsigned int packet = (row << 8) | data[m];
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

void max7219_init(void) {
    *ddra = 0xFF;
    *porta = (1 << CS_BIT);

    for (char i = 0; i < 4; i++) {
        max7219_send_row4(0x0C, 0x01, 0x01, 0x01, 0x01);
        max7219_send_row4(0x09, 0x00, 0x00, 0x00, 0x00);
        max7219_send_row4(0x0A, 0x08, 0x08, 0x08, 0x08);
        max7219_send_row4(0x0B, 0x07, 0x07, 0x07, 0x07);
        max7219_send_row4(0x0F, 0x00, 0x00, 0x00, 0x00);
    }

    max7219_clear_all();
}

void max7219_clear_all(void) {
    for (unsigned char row = 1; row <= 8; row++)
        max7219_send_row4(row, 0x00, 0x00, 0x00, 0x00);
}
