#ifndef MAX7219_H
#define MAX7219_H

#ifdef __cplusplus
extern "C" {
#endif

void max7219_init(void);
void max7219_send_dual(unsigned char address, unsigned char data1, unsigned char data2);
void max7219_clear(void);

#ifdef __cplusplus
}
#endif

#endif
