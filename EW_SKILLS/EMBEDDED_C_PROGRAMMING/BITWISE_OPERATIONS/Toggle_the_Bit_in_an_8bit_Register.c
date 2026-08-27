/*
6. Toggle the Bit in an 8-bit Register
In your firmware, you want to toggle a specific bit in an 8-bit register. Toggle means to invert the bit: if 1 → 0, and if 0 → 1.
Use 0-based indexing for bit positions (0 = LSB, 7 = MSB).
 

Example 1

Input: reg = 0b00000110, pos = 1 
Output: 0b00000100

Example 2

Input: reg = 0b00000000, pos = 3 
Output: 0b00001000

Example 3

Input: reg = 0b00001111, pos = 3 
Output: 0b00000111
  */
#include <stdio.h>
#include <stdint.h>

uint8_t toggle_bit(uint8_t reg, uint8_t pos) {
    // Your code here
    return reg^(1<<pos);
}

int main() {
    uint8_t reg, pos;
    scanf("%hhu %hhu", &reg, &pos);
    uint8_t result = toggle_bit(reg, pos);
    printf("%u", result);
    return 0;
}
