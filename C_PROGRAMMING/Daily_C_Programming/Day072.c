/*
 Little Endian to Big Endian
In embedded systems, communication between processors may require byte-order conversion. You are given a 32-bit unsigned integer stored in little-endian format.

Your task is to convert this value to big-endian by swapping its bytes, and print the result.
 

Example-1

Input: 305419896
Output: 2018915346
(0x12345678 → 0x78563412)


Example-2

Input: 1
Output: 16777216
(0x00000001 → 0x01000000)


Example-3

Input: 0xAABBCCDD
Output: 0xDDCCBBAA → 3721182122
  */


#include <stdio.h>
#include <stdint.h>

uint32_t convert_endian(uint32_t value) {
    // Write logic to swap bytes
    return ((value >> 24) & 0x000000FF) |
           ((value >> 8) & 0x0000FF00) |
           ((value << 8) & 0x00FF0000)|
           ((value << 24) & 0xFF000000);
}

int main() {
    uint32_t val;
    scanf("%u", &val);
    printf("%u", convert_endian(val));
    return 0;
}
/*
Solving Approach
To convert a value from little-endian to big-endian, you're reversing the byte order — a common task in embedded systems when communicating across architectures.

🪜 Solving Algorithm: Little to Big Endian (32-bit)

Let’s say you have a 32-bit value stored in little-endian format:

uint32_t val = 0x12345678;


In memory (little-endian):

Byte[0] = 0x78  
Byte[1] = 0x56  
Byte[2] = 0x34  
Byte[3] = 0x12


To convert to big-endian, you want:

Byte[0] = 0x12  
Byte[1] = 0x34  
Byte[2] = 0x56  
Byte[3] = 0x78


✅ Step-by-Step Algorithm

Extract each byte using bitwise AND and shifts:byte0 = (val >> 24) & 0xFF

byte1 = (val >> 16) & 0xFF

byte2 = (val >> 8) & 0xFF

byte3 = val & 0xFF

Reassemble in reversed order:

big_endian_val = (byte3 << 24) |
                 (byte2 << 16) |
                 (byte1 << 8)  |
                 (byte0);


🧠 Embedded-Friendly C Code

uint32_t little_to_big_endian(uint32_t val) {
    return ((val >> 24) & 0x000000FF) |
           ((val >> 8)  & 0x0000FF00) |
           ((val << 8)  & 0x00FF0000) |
           ((val << 24) & 0xFF000000);
}


🧪 Example

Input: 0x12345678
Output: 0x78563412 (big-endian representation)*/
