/*
23. Set Baud Rate Field in Control Register
You are working with a 32-bit UART control register. The baud rate is controlled by 4 bits located at position 8 (i.e., bits 8 to 11). 

Write a function to update the baud rate field with a new 4-bit value. All other bits in the register must remain unchanged.


Example 1

Input: reg = 0b0000 0000 0000 0000 0000 0000 0000 0000, baud = 0b1010  
Output: 0b0000 0000 0000 0000 0000 1010 0000 0000
Example 2

Input: reg = 0b1111 1111 1111 1111 1111 1111 1111 1111, baud = 0b0000  
Output: 0b1111 1111 1111 1111 1111 0000 1111 1111
 */
