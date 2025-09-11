/* ---------- practice C programming --------------------------------
Keep Only the Highest Set Bit
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
SOLVING APPROACH
1. **Propagate the highest set bit** by OR-ing the number with progressively right-shifted versions of itself (`x |= x >> 1`, `x |= x >> 2`, etc.).  
2. **Create a mask** by shifting the propagated result right by 1 and inverting it (`~(x >> 1)`).  
3. **Isolate the highest bit** by AND-ing the propagated value with the mask (`x & ~(x >> 1)`).


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
}*/
/*Bit Operations using Macros
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

👉 Use macros to **set bits 2 and 7** (`reg |= (1 << 2)` and `reg |= (1 << 7)`), then **clear bit 3** (`reg &= ~(1 << 3)`), and finally **toggle bit 5** (`reg ^= (1 << 5)`), all in sequence.  
👉 These operations modify the input register by directly manipulating individual bits using bit masks and bitwise operators for precise control.

If you want, I can show how this logic maps to a real control register like `PORTB` or `TCCR0A` on AVR.

*/
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


