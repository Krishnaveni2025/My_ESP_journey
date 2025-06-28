#ifndef MAX7219_H
#define MAX7219_H

#ifdef __cplusplus
extern "C" {
#endif

void max7219_init(void);
void max7219_send(unsigned char address, unsigned char data);
void max7219_display_pixel(unsigned char row, unsigned char col);
void max7219_set_row(unsigned char row, unsigned char pattern);
void max7219_clear(void);

#ifdef __cplusplus
}
#endif

#endif
