/*
Add Signed and Unsigned Integers Safely
You are given two inputs:

int8_t a (signed 8-bit)
uint8_t b (unsigned 8-bit)
Your task is to:

Perform the addition of a + b safely, ensuring that if a is negative, the final result is still correctly signed
Return the result as a signed 16-bit integer (int16_t) so the overflow can be observed
 
Example-1

Input: a = -10, b = 20
Output: 10
 

Example-2

Input: a = 10, b = 250
Output: 260
 

Example-3

Input: a = -128, b = 255
Output: 127
  */


#include <stdio.h>
#include <stdint.h>

int16_t signed_unsigned_sum(int8_t a, uint8_t b) {
    // Your logic here
    return (int16_t)a + (int16_t)b;
}

int main() {
    int8_t a;
    uint8_t b;
    scanf("%hhd %hhu", &a, &b);
    printf("%d", signed_unsigned_sum(a, b));
    return 0;
}
/*
Solving Approach

Perform the addition of a + b safely, ensuring that if a is negative, the final result is still correctly signed

Return the result as a signed 16-bit integer (int16_t) so the overflow can be observed



*/

