/*
Convert Decimal Number to Binary or Hex Without itoa function
In firmware development, you might need to convert numbers to binary or hexadecimal strings manually — for instance, sending over UART or displaying on an LCD — without using standard library functions like itoa().

Your task is to:

Read an unsigned integer num and a base (2 or 16)
Print the number in the given base as a string
You must not use any standard string conversion like itoa() or sprintf()
Use only loops and arithmetic
 

Example-1

Input: num = 10, base = 2
Output: 1010

Example-2

Input: num = 255, base = 16
Output: FF

Example-3

Input: num = 0, base = 2
Output: 0
  */

#include <stdio.h>
#include <stdint.h>

void print_base(uint16_t num, uint8_t base) {
    // Your logic here
    char buffer[17]; // Enough for 16-bit binary + null terminator
    int i = 0;

    if (num == 0) {
        printf("0\n");
        return;
    }

    while (num > 0) {
        uint8_t digit = num % base;
        buffer[i++] = (digit < 10) ? ('0' + digit) : ('A' + digit - 10);
        num /= base;
    }

    // Print in reverse order
    for (int j = i - 1; j >= 0; j--) {
        putchar(buffer[j]);
    }
    putchar('\n');
    
}

int main() {
    uint16_t num;
    uint8_t base;
    scanf("%hu %hhu", &num, &base);

    print_base(num, base);
    return 0;
}
/*
Solving Approach

Handle Zero Case

If num == 0, print "0" and return

Initialize a BufferUse a char buffer[] to store digits in reverse order

Use an index i = 0 to track buffer position

Loop Until num Becomes ZeroIn each iteration:

digit = num % base

Convert digit to character:If digit < 10: '0' + digit

Else: 'A' + digit - 10 (for hex digits)

Store character in buffer

num = num / base

Print Buffer in Reverse

Loop from i - 1 down to 0 and print each character

*/


