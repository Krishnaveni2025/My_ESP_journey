/*
Convert Hexadecimal String to Integer Without strtol or sscanf functions
In embedded systems, you often receive hex strings from serial terminals or config files, like "1A3F", and need to convert them into integers — without using strtol(), sscanf(), or other library functions.

Your task is to:

Read a hex string of up to 4 characters (e.g., "1A3F")
Convert it into a uint16_t integer
Handle both uppercase and lowercase (e.g., "af" = "AF" = 175)

Example-1

Input: 1A3F
Output: 6719

Example-2

Input: AF
Output: 175

Example-3

Input: 0000
Output: 0

Example-4

Input: ffff
Output: 65535
  */


#include <stdio.h>
#include <stdint.h>

uint16_t hex_to_uint(const char *str) {
    uint16_t result = 0;
    char c;
    uint8_t value;

    for (int i = 0; str[i] != '\0'; i++) {
        c = str[i];

        // Convert lowercase to uppercase
        if (c >= 'a' && c <= 'f') {
            c -= 32;
        }

        // Convert character to numeric value
        if (c >= '0' && c <= '9') {
            value = c - '0';
        } else if (c >= 'A' && c <= 'F') {
            value = c - 'A' + 10;
        } else {
            // Invalid character
            return 0;
        }

        result = (result << 4) | value; // Shift left 4 bits and add new digit
    }

    return result;
}

int main() {
    char hex[10];
    scanf("%9s", hex); // Limit input to 9 characters + null terminator

    printf("%u\n", hex_to_uint(hex));
    return 0;
}
/*
Solving Approach

 Initialize Result

Start with a variable result = 0 to accumulate the final number.

2. Loop Through Each Character

For each character c in the input string:

Convert lowercase to uppercase if needed (e.g., 'a' → 'A')You can do this by subtracting 32: 'a' - 32 = 'A'

Convert the character to its numeric value:If '0' to '9': value = c - '0'

If 'A' to 'F': value = c - 'A' + 10

If the character is invalid (not a hex digit), return 0 or handle error

3. Shift and Add

Multiply the current result by 16 (or shift left by 4 bits): result <<= 4

Add the new digit: result |= value

4. Return the Result

After the loop, result holds the final integer value


 Convert Integer to Hex String Without sprintf or itoa functions
In embedded systems, you may need to transmit an integer value as a hexadecimal string over UART, display, or logs — but without using heavy standard functions like sprintf() or itoa().

Your task is to:

Read an unsigned 16-bit integer num
Print its hexadecimal string representation in uppercase
Do not use any built-in conversion functions like itoa(), sprintf(), etc.

Example-1

Input: 255
Output: FF

Example-2

Input: 4095
Output: FFF

Example-3

Input: 0
Output: 0

Example-4

Input: 4660
Output: 1234
Code

#include <stdio.h>
#include <stdint.h>

void print_hex(uint16_t num) {
    char buffer[5]; // Max 4 hex digits + null terminator
    int i = 0;

    if (num == 0) {
        printf("0\n");
        return;
    }

    while (num > 0) {
        uint8_t digit = num % 16;
        buffer[i++] = (digit < 10) ? ('0' + digit) : ('A' + digit - 10);
        num /= 16;
    }

    // Print in reverse order
    for (int j = i - 1; j >= 0; j--) {
        putchar(buffer[j]);
    }
    putchar('\n');
}

int main() {
    uint16_t num;
    scanf("%hu", &num);
    print_hex(num);
    return 0;
}

Solving Approach

1. Handle Zero Case

If num == 0, print '0' and return — this is a special case.

2. Initialize a Buffer

Use a character array buffer[5] to store up to 4 hex digits (plus null terminator if needed).

Use an index i = 0 to track how many digits you’ve stored.

3. Extract Hex Digits

Loop while num > 0:

digit = num % 16 → gives the last hex digit

Convert digit to character:If digit < 10: '0' + digit

Else: 'A' + digit - 10 (for values 10–15)

Store the character in buffer[i++]

num = num / 16 → move to the next digit

4. Print in Reverse

Hex digits were stored from least significant to most significant.

Loop from i - 1 down to 0 and print each character using putchar()



*/

