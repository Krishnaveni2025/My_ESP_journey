/*
Convert Integer to String
In embedded systems, numeric values often need to be converted into printable string format (e.g., for UART or display output), but you may not have access to standard C library functions like itoa() or sprintf().

Your task is to:

Read a signed integer
Convert it to its string representation and
Print each character with a space between characters
Do not use itoa(), sprintf() or string libraries
 
Example-1

Input: 123
Output: 1 2 3


Example-2

Input: -45
Output: - 4 5

Example-3

Input: 0
Output: 0
  */
Code

#include <stdio.h>

void print_integer_as_string(int num) {
    // Your logic here
        char buffer[12]; // Enough for -2147483648 + null terminator
    int i = 0;

    // Handle zero explicitly
    if (num == 0) {
        printf("0\n");
        return;
    }

    // Handle negative numbers
    if (num < 0) {
        putchar('-');
        putchar(' ');
        num = -num;
    }

    // Extract digits in reverse
    while (num > 0) {
        buffer[i++] = '0' + (num % 10);
        num /= 10;
    }

    // Print digits in correct order with spaces
    while (i--) {
        putchar(buffer[i]);
        if (i > 0) putchar(' ');
    }
    putchar('\n');

}

int main() {
    int num;
    scanf("%d", &num);
    print_integer_as_string(num);
    return 0;
}
/*

Solving Approach
Handle Zero Case

If num == 0, print '0' and return

Handle Negative Numbers

If num < 0:

Print '-' followed by a space

Convert num to positive using num = -num

Extract Digits in Reverse

Use a buffer (e.g., char buffer[12]) to store digits

Loop:

digit = num % 10

Convert to character: '0' + digit

Store in buffer

num = num / 10

Print Digits in Correct Order

Loop from buffer end to start

Print each character followed by a space (except after the last digit)

*/

