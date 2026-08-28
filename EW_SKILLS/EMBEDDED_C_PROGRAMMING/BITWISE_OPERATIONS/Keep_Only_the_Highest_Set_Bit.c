/*
9. Keep Only the Highest Set Bit
You are given a 16-bit register (uint16_t).
Your task is to:

Return a value where only the highest (leftmost) set bit is retained
All other bits must be cleared

Example-1

Input:  44        // Binary: 0000000000101100  
Output: 32        // Binary: 0000000000100000
Example-2

Input:  512       // Binary: 0000001000000000  
Output: 512       // Binary: 0000001000000000
Example-3

Input:  255       // Binary: 0000000011111111  
Output: 128       // Binary: 0000000010000000
 */
#include <stdio.h>
#include <stdint.h>

// Complete the function
uint16_t highest_set_bit(uint16_t reg) {
    // Your logic here
    if(reg==0) return 0;

    uint16_t val = 1U << 15;//find the highest set bit
    while((reg&val)==0){
        val>>=1;
    }
    return val;
}

int main() {
    uint16_t reg;
    scanf("%hu", &reg);

    uint16_t result = highest_set_bit(reg);
    printf("%hu", result);
    return 0;
}
