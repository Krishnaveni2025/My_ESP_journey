/* Practicing the  bitwise operations in c
1. SET or CLEAR  a speceific bit in a Register
Input: Register value, Bit position, Operation (SET 1/CLEAR 0)
Output: Modified Register value

#include<stdio.h>
unsigned char modifybit(unsigned char regval,int posi,int oper);
int main()
{
    unsigned char regval;
    int posi,oper;
    printf("Enter the Register value: ");
    scanf("%u",&regval);
    printf("Enter the Bit position (0-7): ");
    scanf("%d",&posi);
    printf("Enter the Operation (SET 1/CLEAR 0): ");
    scanf("%d",&oper);
    printf("%d",modifybit(regval,posi,oper));
    return 0;
}
unsigned char modifybit(unsigned char regval,int posi,int oper)
{
    if(oper==1) //SET
        regval=regval | (1<<posi);
    else if(oper==0) //CLEAR
        regval=regval & ~(1<<posi);
    return regval;
}
    2.Bit Toggle
Write a C program to toggle the 5th bit (0-based index) of a given integer.

The program should take an integer N as input.
It should toggle the 5th bit of N (i.e., flip the bit at position 5: if 0, make it 1; if 1, make it 0).
Note: The 5th bit is at position 5(0-based indexing). For example, in the binary number 100100, the 5th bit is 1.

Example

Input: 10
Explanation:
Binary representation of 10 is 00001010.
Toggling the 5th bit (position 5) results in 00101010, which is 42 in decimal.
Expected Output: 42
#include<stdio.h>
int toggle5thbit(int n);
int main()
{
    unsigned int n;
    printf("Enter the number: ");
    scanf("%u",&n);
    printf("Number after toggling 5th bit: %u",toggle5thbit(n));
    return 0;
}
int toggle5thbit(int n)
{
    return (n ^ (1 << 5));
}
    3. Check if K-th Bit is Set
Write a C program to check if the K-th bit (0-based index) of an integer N is set (1) or not (0).

Input Format

Two integers N and K.
Output Format

Print 1 if the K-th bit of Integer N is set (1), otherwise print 0.
 

Example

Input N= 8 &  K= 3

Here Binary value of 8 is 00001000

So output will be 1
#include<stdio.h>
unsigned char checkkthbit(unsigned char n,int k);
int main()
{
    unsigned char regval;
    int k;
    printf("Enter the Register value: ");
    scanf("%u",&regval);
    printf("Enter the Bit position (0-7): ");
    scanf("%d",&k);
    printf("K-th bit is %d",checkkthbit(regval,k));
    return 0;
}
unsigned char checkkthbit(unsigned char n,int k)
{
    if(n & (1<<k))
        return 1;
    else
        return 0;
        //return (n & (1<<k)) ? 1 : 0;
        //return (n >> k) & 1; //Another method
}
        4. Set the Bit in an 8-bit Register
You are working with an 8-bit control register. Write a function to set the bit at a given position without affecting other bits.

Use 0-based indexing for bit positions (0 = LSB, 7 = MSB).


Example 1

Input: reg = 0b00000101, pos = 1
Output: 0b00000111

Example 2

Input: reg = 0b00001000, pos = 0
Output: 0b00001001

#include <stdio.h>
#include <stdint.h>
uint8_t set_bit(uint8_t reg, uint8_t pos);
int main() {
    uint8_t reg, pos;
    scanf("%hhu %hhu", &reg, &pos);  // Accept register value and position
    uint8_t result = set_bit(reg, pos);
    printf("%u", result);         // Output the result as an integer
    return 0;
}
uint8_t set_bit(uint8_t reg, uint8_t pos) {
    // Your code here
    reg |= 1<<pos;
    return reg;
}
    5. Clear the Bit in an 8-bit Register
You are working with an 8-bit control register. Write a function to clear (set to 0) the bit at a given position without affecting other bits.

Use 0-based indexing for bit positions (0 = LSB, 7 = MSB).


Example 1

Input: reg = 0b00000111, pos = 0 
Output: 0b00000110

Example 2

Input: reg = 0b00001111, pos = 3 
Output: 0b00000111

#include <stdio.h>
#include <stdint.h>
uint8_t clear_bit(uint8_t reg, uint8_t pos);
int main() {    
    uint8_t reg, pos;
    scanf("%hhu %hhu", &reg, &pos);  // Accept register value and position
    uint8_t result = clear_bit(reg, pos);
    printf("%u", result);         // Output the result as an integer
    return 0;
}
uint8_t clear_bit(uint8_t reg, uint8_t pos) {
    // Your code here
    reg &= ~(1 << pos);
    return reg;
}
6. Toggle the Bit in an 8-bit Register
In your firmware, you want to toggle a specific bit in an 8-bit register. Toggle means to invert the bit: if 1 → 0, and if 0 → 1.
Use 0-based indexing for bit positions (0 = LSB, 7 = MSB).
 

Example 1

Input: reg = 0b00000110, pos = 1 
Output: 0b00000100

Example 2

Input: reg = 0b00000000, pos = 3 
Output: 0b00001000

Example 3

Input: reg = 0b00001111, pos = 3 
Output: 0b00000111
#include <stdio.h>
#include <stdint.h>
uint8_t toggle_bit(uint8_t reg, uint8_t pos);
int main() {    
    uint8_t reg, pos;
    scanf("%hhu %hhu", &reg, &pos);  // Accept register value and position
    uint8_t result = toggle_bit(reg, pos);
    printf("%u", result);         // Output the result as an integer
    return 0;
}
uint8_t toggle_bit(uint8_t reg, uint8_t pos) {
    // Your code here
    reg ^= (1 << pos);
    return reg;
}
    #include <stdio.h>
#include <stdint.h>

uint8_t is_bit_set(uint8_t reg, uint8_t pos) {
    // Your code here
    if(reg&(1<<pos))
        return 1;
    return 0;
}

int main() {
    uint8_t reg, pos;
    scanf("%hhu %hhu", &reg, &pos);
    printf("%u", is_bit_set(reg, pos));
    return 0;
}
    8. Set Specific Bits in a 32-bit Register
You are working with a 32-bit configuration register. Set a few bits starting from a given position and covering a specific length. The bits must be set to 1 (ON), without affecting other bits in the register.

Use 0-based indexing.


Example 1

Input: reg = 0b0000 0000 0000 0000 0000 0000 0000 0000, pos = 4, len = 3  
Output: 0b0000 0000 0000 0000 0000 0000 0111 0000
 

Example 2

Input: reg = 0b0000 0000 0000 0000 0000 0000 0000 0001, pos = 1, len = 2  
Output: 0b0000 0000 0000 0000 0000 0000 0000 0111

#include <stdio.h>
#include <stdint.h>
uint32_t set_bits(uint32_t reg, uint8_t pos, uint8_t len);
int main()
{
    uint32_t reg;
    uint8_t pos, len;
    scanf("%u %hhu %hhu", &reg, &pos, &len);  // Accept register value, position and length
    //%hhu for uint8_t because it expects an unsigned char
    // %u for uint32_t because it expects an unsigned int
    uint32_t result = set_bits(reg, pos, len);
    printf("%u", result);         // Output the result as an integer
    return 0;
}
uint32_t set_bits(uint32_t reg, uint8_t pos, uint8_t len) {
    // Your code here
    uint32_t mask = ((1 << len) - 1) << pos;
    reg |= mask;
    return reg;
    }
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
#include <stdio.h>
#include <stdint.h>

// Complete the function
uint16_t highest_set_bit(uint16_t reg) {
    // Your logic here
    if(reg == 0)
        return 0;
    //propagate highest bits to the right
    reg |= (reg>>1);
    reg |= (reg>>2);
    reg |= (reg>>4);
    reg |= (reg>>8);
    //isolate the highest set bit
    return reg & ~(reg >> 1);
}

int main() {
    uint16_t reg;
    scanf("%hu", &reg);

    uint16_t result = highest_set_bit(reg);
    printf("%hu", result);
    return 0;
}
    10. Bit Operations using Macros
In embedded systems, modifying specific bits of control or status registers is a frequent task. You’re given an 8-bit register (uint8_t) and must perform the following bit operations on it:

Set bits 2 and 7
Clear bit 3
Toggle bit 5
Your task is to implement a function that:

Accepts a uint8_t reg as input
Applies all the above operations in the given order
Returns the updated register value
Use proper bitwise macros for maintainability.

 

Example-1

Input: 0
Output: 164
(00000000 → 10100100)

 

Example-2

Input: 255
Output: 215
(11111111 → Set 2 & 7 → already set, Clear 3 → unset bit 3, Toggle 5 → flip bit 5 → becomes 0)

 

Example-3

Input: 36
Output: 132
(00100100 → Toggle 5 → cleared, Clear 3 → already clear, Set 2 and 7 → becomes 10000100)
#include <stdio.h>
#include <stdint.h>

// Define bitwise macros here
#define SET_BIT(reg, bit)     ((reg) |= (1U << (bit)))
#define CLEAR_BIT(reg, bit)   ((reg) &= ~(1U << (bit)))
#define TOGGLE_BIT(reg, bit)  ((reg) ^= (1U << (bit)))

uint8_t modify_register(uint8_t reg) {
    SET_BIT(reg, 2);     // Set bit 2
    SET_BIT(reg, 7);     // Set bit 7
    CLEAR_BIT(reg, 3);   // Clear bit 3
    TOGGLE_BIT(reg, 5);  // Toggle bit 5
    return reg;
}

int main() {
    uint8_t reg;
    scanf("%hhu", &reg);
    printf("%u", modify_register(reg));
    return 0;
}
*/
