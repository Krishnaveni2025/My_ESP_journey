//Question: Write a Calculator program that will give the "Calc" prompt and 
//always stay on this prompt. When a user types one of the 
//following commands, the program will calculate and give the 
//result.
//Typing "Exit" will exit from the Calculator program. This program 
//accepts up to 50-digit numbers. Then, the division will give the 
//quotient and remainder.
//Calc> 12345678967354748+9876546877687678678678678 - Addition
//Calc> 12345678995387837883748798-8738478937937498237 - Subtraction
//Calc> 123478763783847239874 * 34837472384723894732 - Multiplication
//Calc> 1233489374983933498398095/3487384 - Division
//Calc> Exit - Quit.
//Note:
//Do not accept Invalid numbers.
//Do not print leading zeros.
//Use functions and write a professional program use Linux coding style.
//Each number can be of a different digit.
//Make sure that all the Input conditions are taken care.
//Try to minimize the execution speed.
/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_DIGITS 50

void add(char* num1, char* num2, char* result) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int result_len = (len1 > len2) ? len1 : len2;

    // Initialize result array with zeros
    for (int i = 0; i < result_len + 1; i++) {
        result[i] = '0';
    }

    int carry = 0;
    for (int i = 0; i < result_len; i++) {
        int sum = carry;
        if (i < len1) {
            sum += num1[len1 - i - 1] - '0';
        }
        if (i < len2) {
            sum += num2[len2 - i - 1] - '0';
        }
        result[result_len - i] = (sum % 10) + '0';
        carry = sum / 10;
    }
    result[result_len] = carry + '0';
}

void subtract(char* num1, char* num2, char* result) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);

    // Initialize result array with zeros
    for (int i = 0; i < len1; i++) {
        result[i] = '0';
    }

    int borrow = 0;
    for (int i = 0; i < len1; i++) {
        int diff = num1[len1 - i - 1] - '0' - borrow;
        if (i < len2) {
            diff -= num2[len2 - i - 1] - '0';
        }
        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        result[len1 - i - 1] = diff + '0';
    }
}

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

void divide(char* num1, char* num2, char* quotient, char* remainder) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);

    // Initialize quotient and remainder arrays with zeros
    for (int i = 0; i < len1; i++) {
        quotient[i] = '0';
    }
    for (int i = 0; i < len2; i++) {
        remainder[i] = '0';
    }

    int rem_len = len1;
    for (int i = 0; i < len1; i++) {
        int div = 0;
        while (rem_len >= len2 && strcmp(remainder, num2) >= 0) {
            div++;
            for (int j = 0; j < len2; j++) {
                remainder[j] -= num2[j] - '0';
            }
            remainder[len2] = '0';
            rem_len = strlen(remainder);
        }
        quotient[len1 - i - 1] = div + '0';
        if (rem_len > 0) {
            remainder[rem_len] = num1[len1 - i - 1];
            rem_len++;
        }
    }
}

int main() {
    char num1[MAX_DIGITS + 1];
    char num2[MAX_DIGITS + 1];
    char result[MAX_DIGITS + 1];
    char quotient[MAX_DIGITS + 1];
    char remainder[MAX_DIGITS + 1];

    while (1) {
        printf("Calc> ");
        char input[100];
        scanf("%s", input);

        if (strcmp(input, "Exit") == 0) {
            break;
        }
    }     
}*/
/*-------------------------------------Using functions--------------------------------*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_DIGITS 50

// Function declarations
void add(char* num1, char* num2, char* result);
void subtract(char* num1, char* num2, char* result);
void multiply(char* num1, char* num2, char* result);
void divide(char* num1, char* num2, char* quotient, char* remainder);
void process_input(char* input, char* result, char* quotient, char* remainder);

int main() {
    char num1[MAX_DIGITS + 1];
    char num2[MAX_DIGITS + 1];
    char result[(2 * MAX_DIGITS) + 1];
    char quotient[MAX_DIGITS + 1];
    char remainder[MAX_DIGITS + 1];

    while (1) {
        printf("Calc> ");
        char input[100];
        fgets(input, sizeof(input), stdin);

        if (strncmp(input, "Exit", 4) == 0) {
            break;
        }

        process_input(input, result, quotient, remainder);
    }
    return 0;
}

// Function to add two numbers represented as strings
void add(char* num1, char* num2, char* result) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int result_len = (len1 > len2) ? len1 : len2;

    // Initialize result array with zeros
    for (int i = 0; i < result_len + 1; i++) {
        result[i] = '0';
    }

    int carry = 0;
    for (int i = 0; i < result_len; i++) {
        int sum = carry;
        if (i < len1) {
            sum += num1[len1 - i - 1] - '0';
        }
        if (i < len2) {
            sum += num2[len2 - i - 1] - '0';
        }
        result[result_len - i] = (sum % 10) + '0';
        carry = sum / 10;
    }
    result[result_len] = carry + '0';

    // Remove leading zeros
    int start = 0;
    while (result[start] == '0' && start < result_len) {
        start++;
    }
    strcpy(result, result + start);
}

// Function to subtract two numbers represented as strings
void subtract(char* num1, char* num2, char* result) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);

    // Initialize result array with zeros
    for (int i = 0; i < len1; i++) {
        result[i] = '0';
    }

    int borrow = 0;
    for (int i = 0; i < len1; i++) {
        int diff = num1[len1 - i - 1] - '0' - borrow;
        if (i < len2) {
            diff -= num2[len2 - i - 1] - '0';
        }
        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        result[len1 - i - 1] = diff + '0';
    }

    // Remove leading zeros
    int start = 0;
    while (result[start] == '0' && start < len1) {
        start++;
    }
    strcpy(result, result + start);
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

    // Remove leading zeros
    int start = 0;
    while (result[start] == '0' && start < result_len) {
        start++;
    }
    strcpy(result, result + start);
}

// Function to divide two numbers represented as strings
void divide(char* num1, char* num2, char* quotient, char* remainder) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);

    // Initialize quotient and remainder arrays with zeros
    for (int i = 0; i < len1; i++) {
        quotient[i] = '0';
    }
    for (int i = 0; i < len2; i++) {
        remainder[i] = '0';
    }

    int rem_len = len1;
    for (int i = 0; i < len1; i++) {
        int div = 0;
        while (rem_len >= len2 && strcmp(remainder, num2) >= 0) {
            div++;
            for (int j = 0; j < len2; j++) {
                remainder[j] -= num2[j] - '0';
            }
            remainder[len2] = '0';
            rem_len = strlen(remainder);
        }
        quotient[len1 - i - 1] = div + '0';
        if (rem_len > 0) {
            remainder[rem_len] = num1[len1 - i - 1];
            rem_len++;
        }
    }

    // Remove leading zeros from quotient
    int start = 0;
    while (quotient[start] == '0' && start < len1) {
        start++;
    }
    strcpy(quotient, quotient + start);

    // Remove leading zeros from remainder
    start = 0;
    while (remainder[start] == '0' && start < len2) {
        start++;
    }
    strcpy(remainder, remainder + start);
}

// Function to process the input and perform the appropriate calculation
void process_input(char* input, char* result, char* quotient, char* remainder) {
    char num1[MAX_DIGITS + 1];
    char num2[MAX_DIGITS + 1];
    char operator;

    // Parse the input
    sscanf(input, "%50s %c %50s", num1, &operator, num2);

    // Perform the calculation
    switch (operator) {
        case '+':
            add(num1, num2, result);
            printf("Result: %s\n", result);
            break;
        case '-':
            subtract(num1, num2, result);
            printf("Result: %s\n", result);
            break;
        case '*':
            multiply(num1, num2, result);
            printf("Result: %s\n", result);
            break;
        case '/':
            divide(num1, num2, quotient, remainder);
            printf("Quotient: %s\n", quotient);
            printf("Remainder: %s\n", remainder);
            break;
        default:
            printf("Invalid operation.\n");
    }
}
