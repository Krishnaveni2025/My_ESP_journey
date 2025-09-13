/*Bit Spreading Interleave Bits with Zeros
In some protocols or hardware applications (e.g. graphic rendering, signal encoding), 
bit spreading or interleaving is used to insert 0s between the bits of a value for purposes like data alignment or transmission.

You are given an 8-bit number, and your task is to:

Spread the bits such that each bit is followed by a 0
The result will be a 16-bit number where each original bit occupies even positions (0, 2, 4…)
All odd positions are 0s

Example Logic

Original (8-bit):

b7 b6 b5 b4 b3 b2 b1 b0
Spreading result (16-bit):

0 b7 0 b6 0 b5 0 b4 0 b3 0 b2 0 b1 0 b0


Example-1

Input: val = 0b11001010 (Decimal 202)
Output: 0b0101000001000100 → Decimal: 20548

Example-2

Input: val = 0b10101010
Output: 0b0100010001000100 → Decimal: 17476

Example-3

Input: val = 0b11111111
Output: 0b0101010101010101 → Decimal: 21845


#include <stdio.h>
#include <stdint.h>

uint16_t spread_bits(uint8_t val) {
    uint16_t result = 0;
    for (int i = 0; i < 8; i++) {
        if ((val >> i) & 0x01) {
            result |= (1 << (2 * i));
        }
    }
    return result;
}

int main() {
    uint8_t val;
    scanf("%hhu", &val);
    printf("%u\n", spread_bits(val));
    return 0;
}
*/
Code


#include <stdio.h>
#include <stdint.h>

#define SET_ENABLE(val)   ((val & 0x01) << 0)
#define SET_MODE(val)     ((val & 0x03) << 1)
#define SET_SPEED(val)    ((val & 0x07) << 3)

uint16_t build_register(uint8_t enable, uint8_t mode, uint8_t speed) {
    uint16_t reg = 0;
    reg |= SET_ENABLE(enable);
    reg |= SET_MODE(mode);
    reg |= SET_SPEED(speed);
    // RESERVED bits (6–7) are left as 0
    return reg;
}

int main() {
    uint8_t enable, mode, speed;
    scanf("%hhu %hhu %hhu", &enable, &mode, &speed);
    printf("%u\n", build_register(enable, mode, speed));
    return 0;
}
/*
Solving Approach

🧠 Solving Approach in 4 Clear Steps

Understand the Register LayoutBreak down each field: number of bits, starting position, and constraints (e.g., reserved bits must be 0).

Example: MODE is 2 bits starting at bit 1 → mask = 0x03, shift = << 1.

Define Bitfield MacrosUse masking and shifting to isolate and position each field:

#define SET_MODE(val) ((val & 0x03) << 1)


This ensures only valid bits are used and placed correctly.

Pack the Register ValueUse bitwise OR (|) to combine all fields into a single register:

reg |= SET_ENABLE(enable) | SET_MODE(mode) | SET_SPEED(speed);


Validate Reserved BitsEnsure reserved bits are untouched or explicitly cleared:

reg &= ~(0x03 << 6);  // Clear bits 6–7


🔧 Embedded Best Practices

Always use & masks to avoid overflow or invalid values.

Use const or macros for field widths and positions to improve maintainability.

Comment each macro with its field name and bit position.

For complex registers, consider using bitfield structs (with caution for portability).

This approach works whether you're configuring TCCR0A, ADCSRA, or a custom peripheral register. Want to see how this maps to real datasheet specs or auto-generate macros from a register map? I can help with that too!



*/
