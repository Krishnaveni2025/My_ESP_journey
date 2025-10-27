/*
Convert a String to Float
You are given a null-terminated string representing a floating-point number, which may contain:

An optional sign (+ or -)
A decimal point
Only valid digits and one dot
Your task is to convert this string to its floating-point value (float), without using standard library functions like atof() or strtof().

Do not handle scientific notation (e.g., "1.2e5").


Example-1

Input: "123.45"
Output: 123.45


Example-2

Input: "-0.75"
Output: -0.75

Example-3

Input: "100"
Output: 100.00

Example-4

Input: "+9.99"
Output: 9.99

  */

Code

#include <stdio.h>
#include <stdint.h>

float custom_atof(const char *str) {
    uint8_t i = 0;
    float result = 0.0;
    float fraction = 0.0;
    float divisor = 10.0;
    int sign = 1;
    uint8_t after_dot = 0;

    // Handle optional sign
    if (str[i] == '-') {
        sign = -1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    while (str[i]) {
        if (str[i] >= '0' && str[i] <= '9') {
            if (!after_dot) {
                result = result * 10 + (str[i] - '0');
            } else {
                fraction += (str[i] - '0') / divisor;
                divisor *= 10;
            }
        } else if (str[i] == '.' && !after_dot) {
            after_dot = 1;
        } else {
            break;  // Stop at first non-numeric, non-dot character
        }
        i++;
    }

    return sign * (result + fraction);
}

int main() {
    char str[101];
    fgets(str, sizeof(str), stdin);

    // Remove newline
    uint8_t i = 0;
    while (str[i]) {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }

    float value = custom_atof(str);
    printf("%.2f", value);
    return 0;
}
/*
Solving Approach

🪜 Step-by-Step Solving Algorithm

Initialize variablesresult = 0.0 for the integer part

fraction = 0.0, divisor = 10.0 for the decimal part

sign = 1 to handle negative numbers

after_dot = 0 to track decimal point

Handle optional signIf str[0] == '-', set sign = -1

If str[0] == '+', skip it

Iterate through charactersIf character is a digit ('0' to '9'):If before decimal: result = result * 10 + (ch - '0')

If after decimal: fraction += (ch - '0') / divisor, then divisor *= 10

If character is '.', set after_dot = 1

Stop at any other character

Return final valuereturn sign * (result + fraction)

🧪 Example

Input: " -12.34abc "
Output: -12.34
*/

