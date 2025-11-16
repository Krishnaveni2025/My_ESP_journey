/*
 Detect Underflow in Unsigned Subtraction
You are given two 8-bit unsigned integers a and b. You must compute a - b, and also detect if underflow occurred (i.e., when b > a).

Return:

The result of a - b (with wraparound if any)
A flag carry = 1 if underflow occurred, otherwise carry = 0
 
Example-1

Input: a = 100, b = 50
Output: diff = 50, carry = 0
 

Example-2

Input: a = 10, b = 20
Output: diff = 246, carry = 1
 

Example-3

Input: a = 0, b = 0
Output: diff = 0, carry = 0
*/
#include <stdio.h>
#include <stdint.h>

void subtract_with_underflow(uint8_t a, uint8_t b, uint8_t *diff, uint8_t *carry) {
    // Write logic here
    *diff = a - b;
    *carry = (b > a) ? 1 : 0;
}

int main() {
    uint8_t a, b, diff, carry;
    scanf("%hhu %hhu", &a, &b);
    subtract_with_underflow(a, b, &diff, &carry);
    printf("diff = %u, carry = %u", diff, carry);
    return 0;
}
/*
Solving Approach

Return:

The result of a - b (with wraparound if any)

A flag carry = 1 if underflow occurred, otherwise carry = 0

*/

