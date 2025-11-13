/*
Convert Binary String to Integer Without strtol function or Libraries
In embedded systems, you may receive data as binary strings (e.g., "1101") via UART or user input, and need to convert it to an actual integer value — without using standard functions like strtol() or atoi().

Your task is to:

Read a string of '0' and '1' characters (max length 16)
Convert it to an unsigned integer
You must not use any standard string conversion functions

Example-1

Input: 1010
Output: 10

Example-2

Input: 0001
Output: 1

Example-3

Input: 11111111
Output: 255

Example-4

Input: 0
Output: 0
*/
#include <stdio.h>
#include <stdint.h>

uint16_t binary_to_uint(const char *str) {
    uint16_t result = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        result <<= 1; // Shift left to make space for next bit

        if (str[i] == '1') {
            result |= 1; // Set the least significant bit
        } else if (str[i] != '0') {
            // Invalid character
            return 0; // Or handle error as needed
        }
    }

    return result;
}

int main() {
    char bin[20];
    scanf("%s", bin);

    printf("%u\n", binary_to_uint(bin));
    return 0;
}
