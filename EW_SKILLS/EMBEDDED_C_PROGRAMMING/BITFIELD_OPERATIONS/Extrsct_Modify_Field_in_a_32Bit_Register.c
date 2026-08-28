/*
26. Extract and Modify Field in a 32-bit Register
In embedded systems, a 32-bit configuration register often contains several packed fields. 

Your task is to extract a 5-bit field located at bit positions 10 to 14 from a 32-bit register value. 

If this field’s value is less than 31, increment it by 1. Then write the updated value back to the same bit positions in the register, leaving all other bits unchanged.

Use only bitwise operations to extract, modify, and update the register.

Bit layout example (bit 0 is LSB):

Register: [31 ... 15 | 14 13 12 11 10 | 9 ... 0]
                        ↑  ↑  ↑  ↑  ↑ (target field)
 

Example-1

Input: 0x00003C00
Output: 0x00004000
(Field at bits 10–14 was 0x1E = 30 → incremented to 31)


Example-2

Input: 0x00000000
Output: 0x00000400
(Field was 0 → becomes 1)
 

Example-3

Input: 0x00007C00
Output: 0x00007C00
(Field was 31 → remains unchanged)

*/
