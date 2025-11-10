/*
Print Binary Representation of an 8-bit or 16-bit Value
In embedded development, visualizing the binary form of a value is crucial for debugging and understanding register configuration. Your task is to:

Read an unsigned integer (8-bit or 16-bit)
Print its binary representation, padded with leading zeros
Length must be 8 bits (if input ≤ 255) or 16 bits otherwise 

Example-1

Input: val = 10
Output: 00001010

Example-2

Input: val = 255
Output: 11111111

Example-3

Input: val = 1023
Output: 0000001111111111

Example-4

Input: val = 65535
Output: 1111111111111111
*/

#include <stdio.h>
#include <stdint.h>

void print_binary(uint16_t val) {
    // Your logic here
    uint8_t bits = (val <= 255) ? 8:16;
    for(int8_t i = bits - 1; i>=0; i--)//if the loop uses uint8_t i, and when i reaches 0, it wraps around to 255 instead of stopping. This causes an infinite loop or buffer overflow, especially when printing 8-bit values
    {
        printf("%u",((val>>i)&1));
    }
}

int main() {
    uint16_t val;
    scanf("%hu", &val);
    print_binary(val);
    return 0;
}


