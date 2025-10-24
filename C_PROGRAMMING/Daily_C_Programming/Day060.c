/*
Convert String to Integer
You are given a null-terminated string that may contain:

An optional sign (+ or -) at the beginning
A numeric part made of digits
Other non-digit characters (e.g., letters, symbols) that should be ignored once they appear
Your task is to:

Convert the initial numeric part of the string to an integer
Stop parsing when a non-digit character is encountered
Return the result with the correct sign
Do not use atoi(), strtol(), or similar built-in functions.

 

Example-1

Input: "123abc"
Output: 123

Example-2

Input: "-45!"
Output: -45

Example-3

Input: "42@#"
Output: 42

Example-4

Input: "abc123"
Output: 0


Example-5

Input: "+78x90"
Output: 78*/


Code

#include <stdio.h>
#include <stdint.h>

int custom_atoi(const char *str) {
    uint8_t i = 0;
    int result = 0;
    int sign = 1;

    // Skip leading non-digit characters except sign
    while (str[i] && (str[i] == ' ' || str[i] == '\t')) {
        i++;
    }

    if (str[i] == '-') {
        sign = -1;
        i++;
    } else if (str[i] == '+') {
        i++;
    }

    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    return sign * result;
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

    printf("%d", custom_atoi(str));
    return 0;
}
/*
Solving Approach

Initialize i = 0, result = 0, sign = 1

Check for leading - or +If str[i] == '-', set sign = -1, then increment i

If str[i] == '+', set sign = +1, then increment i

Loop through digitsWhile str[i] is between '0' and '9', build the number:

result = result * 10 + (str[i] - '0')

Increment i

Return sign * result


*/
