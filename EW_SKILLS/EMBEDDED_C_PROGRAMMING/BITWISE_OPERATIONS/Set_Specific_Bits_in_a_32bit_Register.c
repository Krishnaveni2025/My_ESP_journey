/*
8. Set Specific Bits in a 32-bit Register
You are working with a 32-bit configuration register. Set a few bits starting from a given position and covering a specific length. The bits must be set to 1 (ON), without affecting other bits in the register.

Use 0-based indexing.


Example 1

Input: reg = 0b0000 0000 0000 0000 0000 0000 0000 0000, pos = 4, len = 3  
Output: 0b0000 0000 0000 0000 0000 0000 0111 0000
Example 2

Input: reg = 0b0000 0000 0000 0000 0000 0000 0000 0001, pos = 1, len = 2  
Output: 0b0000 0000 0000 0000 0000 0000 0000 0111
*/
#include <stdio.h>
#include <stdint.h>

uint32_t set_bits(uint32_t reg, uint8_t pos, uint8_t len) {
    // Your code here
    uint32_t mask = ((1U << len)-1)<<pos;
    return reg |mask;
}

int main() {
    uint32_t reg;
    uint8_t pos, len;
    scanf("%u %hhu %hhu", &reg, &pos, &len);
    printf("%u", set_bits(reg, pos, len));
    return 0;
}
