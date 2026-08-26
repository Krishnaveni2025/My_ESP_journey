/*
2. Bit Toggle
Write a C program to toggle the 5th bit (0-based index) of a given integer.

The program should take an integer N as input.
It should toggle the 5th bit of N (i.e., flip the bit at position 5: if 0, make it 1; if 1, make it 0).
Note: The 5th bit is at position 5(0-based indexing). For example, in the binary number 100100, the 5th bit is 1.

Examples

Input: 10
Explanation:
Binary representation of 10 is 00001010.
Toggling the 5th bit (position 5) results in 00101010, which is 42 in decimal.
Expected Output: 42
Input: 31
Explanation:
Binary representation of 31 is 00011111.
Toggling the 5th bit (position 5) results in 01011111, which is 95 in decimal.
Expected Output: 95
Input: 0
Explanation:
Binary representation of 0 is 00000000.
Toggling the 5th bit (position 5) results in 00100000, which is 32 in decimal.
Expected Output: 32
*/
#include <stdio.h>

unsigned char modifyBit(unsigned char reg, int pos, int mode) {
    // Write your code here
    if(mode)
            return ((reg | (1<<pos)));
    else
            return((reg &(~(1<<pos))));
}

int main() {
    unsigned char reg;
    int pos, mode;
    scanf("%hhu %d %d", &reg, &pos, &mode);
    printf("%d", modifyBit(reg, pos, mode));
    return 0;
}
