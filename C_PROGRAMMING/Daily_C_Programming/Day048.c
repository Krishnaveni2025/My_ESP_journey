/*
Union Extract Bytes from a 32-bit Value
Your task is to:

Use a union that overlays a uint32_t value with a 4-byte uint8_t array
Read a 32-bit unsigned integer input
Print its 4 individual bytes in little-endian order (i.e., LSB first)
Use only union access, no bit masking or shifts.


Example-1

Input: 305419896
Output: 120 86 52 18

(0x12345678 → bytes: 0x78 0x56 0x34 0x12)


Example-2

Input: 4294967295
Output: 255 255 255 255

Example-3

Input: 1
Output: 1 0 0 0
*/

Code

#include <stdio.h>
#include <stdint.h>

typedef union {
    uint32_t value;
    uint8_t bytes[4];
} Register;

// Write logic here to extract bytes using union
Register r;
void print_bytes(uint32_t input) {
    // Your code here
    r.value = input;
    printf("%u %u %u %u",r.bytes[0],r.bytes[1],r.bytes[2],r.bytes[3]);
}

int main() {
    uint32_t num;
    scanf("%u", &num);
    print_bytes(num);
    return 0;
}
/*
Solving Approach

Use a union that overlays a uint32_t value with a 4-byte uint8_t array

Read a 32-bit unsigned integer input

Print its 4 individual bytes in little-endian order (i.e., LSB first)

*/
