#ifndef MAX7219_H
#define MAX7219_H

#ifdef __cplusplus
extern "C" {
#endif

void max7219_init(void);
void max7219_send_row4(unsigned char row, unsigned char d1, unsigned char d2,
                       unsigned char d3, unsigned char d4);

#ifdef __cplusplus
}
#endif

#endif