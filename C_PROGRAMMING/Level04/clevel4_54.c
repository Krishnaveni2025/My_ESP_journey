//Question: Write a program to multiply up to two 50 digit numbers.
/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_DIGITS 50

void multiply(char* num1, char* num2, char* result) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int result_len = len1 + len2;

    // Initialize result array with zeros
    for (int i = 0; i < result_len; i++) {
        result[i] = '0';
    }

    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + (result[i + j + 1] - '0');
            result[i + j + 1] = (sum % 10) + '0';
            result[i + j] = (sum / 10) + '0';
        }
    }
}

int main() {
    char num1[MAX_DIGITS + 1];
    char num2[MAX_DIGITS + 1];
    char result[(2 * MAX_DIGITS) + 1];

    printf("Enter first number: ");
    scanf("%s", num1);
    printf("Enter second number: ");
    scanf("%s", num2);

    multiply(num1, num2, result);

    printf("Result: %s\n", result);

    return 0;
}*/
/*----------------------------------Using Functions-------------------------------------*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_DIGITS 50

// Function declarations
void multiply(char* num1, char* num2, char* result);
void get_number(char* num, const char* prompt);

int main() {
    char num1[MAX_DIGITS + 1];
    char num2[MAX_DIGITS + 1];
    char result[(2 * MAX_DIGITS) + 1];

    // Get the first number from the user
    get_number(num1, "Enter first number: ");

    // Get the second number from the user
    get_number(num2, "Enter second number: ");

    // Multiply the numbers
    multiply(num1, num2, result);

    // Print the result
    printf("Result: %s\n", result);

    return 0;
}

// Function to multiply two numbers represented as strings
void multiply(char* num1, char* num2, char* result) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int result_len = len1 + len2;

    // Initialize result array with zeros
    for (int i = 0; i < result_len; i++) {
        result[i] = '0';
    }

    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + (result[i + j + 1] - '0');
            result[i + j + 1] = (sum % 10) + '0';
            result[i + j] += (sum / 10);
        }
    }

    // Remove leading zeros in the result
    for (int i = 0; i < result_len; i++) {
        if (result[i] != '0') {
            memmove(result, result + i, result_len - i + 1);
            break;
        }
    }
}

// Function to get a number from the user
void get_number(char* num, const char* prompt) {
    printf("%s", prompt);
    scanf("%50s", num);  // Prevent buffer overflow
}
