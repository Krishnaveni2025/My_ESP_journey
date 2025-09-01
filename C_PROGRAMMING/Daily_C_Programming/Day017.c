/* Take array an of 50 elements as input and
swap first half of Elements with another half of Elements
then check if the middle element is divisible by 7 or not.
If yes print the same number otherwise print "not divisible"*/
#include <stdio.h>
#define arraysize 50

void swaparray(int arr[]);
void printarray(int arr[]);

int main() {
    int arr[arraysize];
    printf("Enter %d positive numbers:\n", arraysize);
    for (int i = 0; i < arraysize; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Original Array:\n");
    printarray(arr);

    swaparray(arr);

    printf("After Swapping:\n");
    printarray(arr);

    if (arr[arraysize / 2] % 7 == 0) {
        printf("Middle element %d is divisible by 7\n", arr[arraysize / 2]);
    } else {
        printf("Not divisible\n");
    }

    return 0;
}

void swaparray(int arr[]) {
    int temp;
    for (int i = 0; i < arraysize / 2; i++) {
        temp = arr[i];
        arr[i] = arr[i + arraysize / 2];
        arr[i + arraysize / 2] = temp;
    }
}

void printarray(int arr[]) {
    for (int i = 0; i < arraysize; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");
}
/*
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

Use bitwise AND (&) to clear those bits in reg without affecting others.*/