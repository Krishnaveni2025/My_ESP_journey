#include <stdio.h>
#include <stdint.h>

uint32_t extract_field(uint32_t reg, uint8_t pos, uint8_t len) {
    // Your code here
    return (reg >> pos) & ((1U << len) - 1);
}

int main() {
    uint32_t reg;
    uint8_t pos, len;
    scanf("%u %hhu %hhu", &reg, &pos, &len);
    printf("%u", extract_field(reg, pos, len));
    return 0;
}

Solving Approach

Shift the register right by the starting bit position to align the target field with the least significant bits.
Then apply a mask of (1 << len) - 1 to isolate and extract only the desired number of bits.

Set Specific Bits in a 32-bit Register
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

uint32_t set_bits(uint32_t reg, uint8_t pos, uint8_t len) {
    // Your code here
    uint32_t mask = ((1U << len) - 1) << pos;
    return reg | mask;
}

int main() {
    uint32_t reg;
    uint8_t pos, len;
    scanf("%u %hhu %hhu", &reg, &pos, &len);
    printf("%u", set_bits(reg, pos, len));
    return 0;
}Create a mask with len bits set to 1, then shift it left to align with the target position.
Use bitwise OR (|) to turn those bits ON in the original register without altering others.


  Clear Specific Bits in a 32-bit Register
You are given a 32-bit control register. Clear a group of bits (set them to 0) starting at a given position and length.

Other bits must stay untouched.


Example 1

Input: reg = 0b1111 1111, pos = 4, len = 4 
Output: 0b0000 1111

Example 2 

Input: reg = 0b0000 1111, pos = 0, len = 2 
Output: 0b0000 1100

  Code

#include <stdio.h>
#include <stdint.h>

uint32_t clear_bits(uint32_t reg, uint8_t pos, uint8_t len) {
    // Your code here
    uint32_t mask = ((1U << len) - 1) << pos;
    return reg & (~mask);
}

int main() {
    uint32_t reg;
    uint8_t pos, len;
    scanf("%u %hhu %hhu", &reg, &pos, &len);
    printf("%u", clear_bits(reg, pos, len));
    return 0;
}

Solving Approach

Create a mask with len bits set to 1, shift it to the target position, then invert it to get 0s where you want to clear.

Use bitwise AND (&) to clear those bits in reg without affecting others.


  Replace Bit Field in a 32-bit Register
Given a 32-bit register, replace a few bits (starting at position pos) with a new value.
Only the targeted bits must change — others should stay unchanged.

 
Example 1

Input: reg = 0b1111 1111, val = 0b0000, pos = 4, len = 4  
Output: 0b0000 1111
 
Example 2

Input: reg = 0b0000 1111, val = 0b10, pos = 1, len = 2  
Output: 0b0000 1101

#include <stdio.h>
#include <stdint.h>

uint32_t replace_field(uint32_t reg, uint32_t val, uint8_t pos, uint8_t len) {
    // Step 1: Create a mask for the target field
    uint32_t mask = ((1U << len) - 1) << pos;

    // Step 2: Clear the target bits in reg
    reg &= ~mask;

    // Step 3: Align val to the correct position and mask it
    val = (val & ((1U << len) - 1)) << pos;

    // Step 4: Combine reg and val
    return reg | val;
}

int main() {
    uint32_t reg, val;
    uint8_t pos, len;
    scanf("%u %u %hhu %hhu", &reg, &val, &pos, &len);
    printf("%u", replace_field(reg, val, pos, len));
    return 0;
}


Extract Even Bits Only from 32-bit Register
From a 32-bit register, extract all even-positioned bits (0, 2, 4, …, 30).
Return the compressed value formed by only these bits (shifted to be consecutive).


Example 1

Input: reg = 0b0101 0101 
Output: 0b1111

Example 2 

Input: reg = 0b1010 1010 
Output: 0b0000


  #include <stdio.h>
#include <stdint.h>

uint32_t extract_even_bits(uint32_t reg) {
    uint32_t result = 0;
    int out_pos = 0;

    for (int i = 0; i < 32; i += 2) {
        // Extract bit at position i
        uint32_t bit = (reg >> i) & 1;
        // Place it at the next position in result
        result |= (bit << out_pos);
        out_pos++;
    }

    return result;
}

int main() {
    uint32_t reg;
    scanf("%u", &reg);
    printf("%u\n", extract_even_bits(reg));
    return 0;
}

Set Baud Rate Field in Control Register
You are working with a 32-bit UART control register. The baud rate is controlled by 4 bits located at position 8 (i.e., bits 8 to 11). 
Write a function to update the baud rate field with a new 4-bit value. All other bits in the register must remain unchanged.


Example 1

Input: reg = 0b0000 0000 0000 0000 0000 0000 0000 0000, baud = 0b1010  
Output: 0b0000 0000 0000 0000 0000 1010 0000 0000

Example 2

Input: reg = 0b1111 1111 1111 1111 1111 1111 1111 1111, baud = 0b0000  
Output: 0b1111 1111 1111 1111 1111 0000 1111 1111


  Rotate Left in an 8-bit Register
You are given an 8-bit register and a number of positions n. Rotate the register to the left by n bits. The rotation must be circular, meaning the leftmost bits wrap around to the right.

Use 0-based indexing, and return the result as an 8-bit value.


Example 1

Input: reg = 0b1011 0000, n = 1 
Output: 0b0110 0001

Example 2

Input: reg = 0b1000 0001, n = 2 
Output: 0b0000 0110

Example 3

Input: reg = 0b1111 1111, n = 4 
Output: 0b1111 1111
#include <stdio.h>
#include <stdint.h>

uint8_t rotate_left(uint8_t reg, uint8_t n) {
    n %= 8;  // Ensure n is within 0–7
    return (reg << n) | (reg >> (8 - n));
}

int main() {
    uint8_t reg, n;
    scanf("%hhu %hhu", &reg, &n);
    printf("%u", rotate_left(reg, n));
    return 0;
}

Rotate Right in a 32-bit Register
You are given a 32-bit hardware register and a number n. Rotate the register to the right by n bits in a circular fashion.
The bits shifted out on the right should reappear on the left.

Example 1

Input: reg = 0b0000 0000 0000 0000 0000 0000 0000 1111,  n = 4 
Output: 0b1111 0000 0000 0000 0000 0000 0000 0000

Example 2 

Input: reg = 0b0000 0000 0000 0000 0000 0000 0000 0001, n = 1 
Output: 0b1000 0000 0000 0000 0000 0000 0000 0000

Example 3

Input: reg = 0b1000 0000 0000 0000 0000 0000 0000 0000, n = 2 
Output: 0b0010 0000 0000 0000 0000 0000 0000 0000


  #include <stdio.h>
#include <stdint.h>

uint32_t rotate_right(uint32_t reg, uint8_t n) {
    // Your code here   
    n %= 32;  // Ensure n is within 0–31
    return (reg >> n) | (reg << (32 - n));
}

int main() {
    uint32_t reg;
    uint8_t n;
    scanf("%u %hhu", &reg, &n);
    printf("%u", rotate_right(reg, n));
    return 0;
}
