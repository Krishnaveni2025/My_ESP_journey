/*
Check if the String Numeric or Alphabetic
You are given a null-terminated input string. Your task is to:

Print "NUMERIC" if the string contains only digits (0–9)
Print "ALPHABETIC" if the string contains only letters (A–Z, a–z)
Otherwise, print "MIXED" if it contains anything else (symbols, mix of digits and letters)
Do not use standard library functions like isdigit() or isalpha(). Use only ASCII value checks.

 

Example-1

Input: "123456"
Output: NUMERIC

Example-2

Input: "firmwareC"
Output: ALPHABETIC

Example-3

Input: "C99"
Output: MIXED

Example-4

Input: "Hello!"
Output: MIXED

Example-5

Input: ""
Output: MIXED (empty string is considered mixed)
*/


#include <stdio.h>
#include <stdint.h>
void classify_string(const char *str) {
    uint8_t i = 0;
    uint8_t has_alpha = 0, has_digit = 0, has_other = 0;

    if (str[0] == '\0') {
        printf("MIXED\n");
        return;
    }

    while (str[i]) {
        char ch = str[i];
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            has_alpha = 1;
        } else if (ch >= '0' && ch <= '9') {
            has_digit = 1;
        } else {
            has_other = 1;
        }
        i++;
    }

    if (has_other || (has_alpha && has_digit)) {
        printf("MIXED\n");
    } else if (has_alpha) {
        printf("ALPHABETIC\n");
    } else if (has_digit) {
        printf("NUMERIC\n");
    } else {
        printf("MIXED\n");
    }
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

    classify_string(str);
    return 0;
}


