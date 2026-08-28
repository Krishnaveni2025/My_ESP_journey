/*
19. Extract a Bit Field from a 32-bit Register
You are working with a 32-bit hardware status register. Extract a few bits from it, starting from a given bit position and covering a given length. Return the extracted value as an unsigned integer.


Use 0-based indexing (LSB = position 0).


Example 1

Input: reg = 0b1011 0110 0111 0000 0000 0000 0000 0000, pos = 28, len = 4 
Output: 0b1011
Example 2

Input: reg = 0b0000 0000 0000 0000 0000 0000 1111 1111, pos = 0, len = 8  
Output: 0b11111111

*/
