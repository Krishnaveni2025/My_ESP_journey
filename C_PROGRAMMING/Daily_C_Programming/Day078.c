/*
Carry Flag in 8-bit Addition
You are given two uint8_t numbers — a and b. You have to add them and store in 8-bit variable only. As addition may overflow (>255), you have to 

Output the sum as it would appear in an 8-bit register (wrapped)
Output the carry flag (1 if carry occurred, 0 otherwise)
Note: You can use only 8-bit variables. No uint16_t, no casting to larger types.

 

Example-1

Input:  a = 255, b = 1
Output: sum = 0, carry = 1

Example-2

Input:  a = 200, b = 100  
Output: sum = 44, carry = 1
  */

#include <stdio.h>
#include <stdint.h>

void add_with_carry(uint8_t a, uint8_t b, uint8_t* result, uint8_t* carry) {
    // Your logic here
    *result = a + b;
    *carry = (*result < a) ? 1 : 0;
}

int main() {
    uint8_t a, b, result, carry;
    scanf("%hhu %hhu", &a, &b);

    add_with_carry(a, b, &result, &carry);

    printf("%u ", result);
    printf("%u", carry);
    return 0;
}
/*
Solving Approach

*result = a + b performs 8-bit addition 
(wraps around if >255)*carry = (*result < a) detects overflow:
*/
If the result is smaller than a, it means a wrap occurred → carry = 1
