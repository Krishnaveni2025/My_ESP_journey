/*Pack Multiple Fields into a 16-bit Control Register
In embedded systems, multiple configuration fields are often packed into a single register using bit-level operations.

You are given the following field specifications to be packed into a 16-bit control register:

Field	Bits	Position (LSB-first)
Mode	3	Bits 0–2
Speed	5	Bits 3–7
Reserved	2	Bits 8–9 (must be 0)
Status	6	Bits 10–15
Your task is to:

Read mode, speed, and status from input
Pack them into a uint16_t register following the given bit layout
Ensure reserved bits (8–9) remain 0
Print the resulting packed value
 
Example-1

Input: mode = 3, speed = 10, status = 12
Output: 12371
(Hex: 0x3053, Binary: 0011000001010011)

Example-2

Input: mode = 7, speed = 31, status = 63
Output: 64767
(Hex: 0xFCFF, Binary: 1111110011111111)

Example-3

Input: mode = 4, speed = 16, status = 8
Output: 8324
(Hex: 0x2084, Binary: 0010000010000100)
Absolutely, Krishnaveni. Here's your two-line solving approach:

```c
mode &= 0x07; speed <<= 3; status <<= 10; // Mask and shift each field
return (status | speed | mode);          // Combine using bitwise OR
```

This packs all fields into the 16-bit register while keeping reserved bits zero. Clean and efficient—just like your style.
*/
#include <stdio.h>
#include <stdint.h>

uint16_t pack_register(uint8_t mode, uint8_t speed, uint8_t status) {
    // Mask each field to ensure correct bit width
    mode   &= 0x07; // 3 bits
    speed  &= 0x1F; // 5 bits
    status &= 0x3F; // 6 bits

    // Pack fields into 16-bit register
    uint16_t reg = (status << 10) | (speed << 3) | mode;

    return reg;
}

int main() {
    uint8_t mode, speed, status;
    scanf("%hhu %hhu %hhu", &mode, &speed, &status);

    uint16_t reg = pack_register(mode, speed, status);
    printf("%u", reg); // Decimal output
    return 0;
}
