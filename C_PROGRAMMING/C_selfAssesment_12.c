/* C PROGRAMMING SELF ASSESSMENT 12
1. USE POINTERS*/
/*1. gET TWO NUMBERS of upto 50 digits and
perform addition and print the result. 
#include<stdio.h>
int main()
{
getnumbers(number1,number2);
addnumbers(number1,number2,result);
print(result);
}
*/
/*2. Get a string and a character from use,
find all the positions where the character is 
present , and print it. 
Example:
String: helloetalvislearning
character: 6
Answer: 2,6,14
*/
/*3. Get a main String and substring. 
check the sub-string in the main string and
print the position. 
String: helloetalvislearning
sub-string:etal
Answer: 6
*/
/*4. Geet a string using gets function and
count all the words in it. 
Example: 
String: Welcome to Etalvis Learning
Answer: 4*/

/*5. Write a program ro multiply up to two 50-digit
numbers. 
#include<stdio.h>
int main()
{
getnumbers(number1,number2);
multiplynumbers(number1,number2,result);
print(result);
}
*/
/*#include<stdio.h>

#define MAX_DIGITS 50

// Function prototypes
void getnumbers(char *num1, char *num2);
int length(char *num);
void multiplynumbers(char *num1, char *num2, int *result);
void print(int *result);

int main() {
    char number1[MAX_DIGITS + 1], number2[MAX_DIGITS + 1];
    int result[MAX_DIGITS * 2];

    getnumbers(number1, number2);
    multiplynumbers(number1, number2, result);
    printf("The multiplication result is: ");
    print(result);

    return 0;
}

// Function definitions
void getnumbers(char *num1, char *num2) {
    printf("Enter the first 50-digit number: ");
    scanf("%s", num1);
    printf("Enter the second 50-digit number: ");
    scanf("%s", num2);
}

int length(char *num) {
    int len = 0;
    while (num[len] != '\0') {
        len++;
    }
    return len;
}

void multiplynumbers(char *num1, char *num2, int *result) {
    int len1 = length(num1);
    int len2 = length(num2);

    // Initialize the result array
    for (int i = 0; i < MAX_DIGITS * 2; i++) {
        result[i] = 0;
    }

    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int pos1 = i + j;
            int pos2 = i + j + 1;

            int sum = mul + result[pos2];

            result[pos2] = sum % 10;
            result[pos1] += sum / 10;
        }
    }
}

void print(int *result) {
    int i = 0;
    // Skip leading zeros
    while (i < MAX_DIGITS * 2 && result[i] == 0) {
        i++;
    }

    // Print the result
    if (i == MAX_DIGITS * 2) {
        printf("0\n");
    } else {
        for (; i < MAX_DIGITS * 2; i++) {
            printf("%d", result[i]);
        }
        printf("\n");
    }
}*/
/*6. Write a calculator program that will give the "Calc" promt
and always stay on this promt . when a user types one
of the following commands, the program will calculate and give result. 
Typing "Exit" will exit from the calculator program. 
This program accepts up to 50-digit numbers. 
Then, the division will give the quotient and remainder. 
Note: 
.> Do not accept invalid numbers. 
.> Do not print leading zeros. 
.> Use functions 
.> Each number can be of a different digit. 
.> Make sure that all the input conditions are taken care. 
.> Try to minimize the exexution speed. 

Calc> 1233489374983933498398095+3487384 - Addition
Calc> 1233489374983933498398095-3487384 - Subtraction
Calc> 12347876378378837487*452135185215 - Multiplication
Calc> 1233489374983933498398095/3487384 - Division
Calc> Exit - Quit.
*/
#include <stdio.h>

#define MAX_DIGITS 50
#define MAX_RESULT_DIGITS (MAX_DIGITS * 2)
#define MAX_INPUT_LENGTH (MAX_DIGITS + 10) // For operator and spaces
// Function prototypes
void getInput(char *input);
void getNumbers(char *num1, char *num2);
int length(char *num);
void addNumbers(char *num1, char *num2, int *result);
void subtractNumbers(char *num1, char *num2, int *result);
void divideNumbers(char *num1, char *num2, int *quotient, int *remainder);
void calculator();  
void printResult(int *result, int size);

int main() {
    calculator();
    return 0;
}

// Function definitions 
void getInput(char *input) {
    printf("Calc> ");
    scanf("%s", input);
}

void getNumbers(char *num1, char *num2) {
    printf("Enter the first number: ");
    scanf("%s", num1);
    printf("Enter the second number: ");
    scanf("%s", num2);
}
void addNumbers(char *num1, char *num2, int *result) {
    int len1 = length(num1);
    int len2 = length(num2);
    int carry = 0;
    int i = 0;

    // Add numbers from the end
    while (i < len1 || i < len2 || carry) {
        int digit1 = (i < len1) ? num1[len1 - 1 - i] - '0' : 0;
        int digit2 = (i < len2) ? num2[len2 - 1 - i] - '0' : 0;
        int sum = digit1 + digit2 + carry;
        result[i] = sum % 10;
        carry = sum / 10;
        i++;
    }
}

void subtractNumbers(char *num1, char *num2, int *result) { 
    int len1 = length(num1);
    int len2 = length(num2);
    int borrow = 0;
    int i = 0;

    // Subtract numbers from the end    
    while (i < len1 || i < len2) {
        int digit1 = (i < len1) ? num1[len1 - 1 - i] - '0' : 0;
        int digit2 = (i < len2) ? num2[len2 - 1 - i] - '0' : 0;
        if (digit1 < digit2 + borrow) {
            digit1 += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        result[i] = digit1 - digit2 - borrow;
        i++;
    }
    // Remove leading zeros
    int j = 0;
    while (j < MAX_DIGITS && result[j] == 0) {
        j++;
    }
    if (j == MAX_DIGITS) {
        result[0] = 0;
    } else {

        for (int k = 0; k < MAX_DIGITS - j; k++) {
            result[k] = result[k + j];
        }
    }
}
void divideNumbers(char *num1, char *num2, int *quotient, int *remainder) {
    int len1 = length(num1);
    int len2 = length(num2);
    int i, j;
    int temp[MAX_DIGITS] = {0};
    int tempLen = 0;

    // Initialize quotient and remainder
    for (i = 0; i < MAX_DIGITS; i++) {
        quotient[i] = 0;
        remainder[i] = 0;
    }

    // Division algorithm
    for (i = 0; i < len1; i++) {
        temp[tempLen++] = num1[i] - '0';
        while (tempLen > 0 && temp[0] == 0) {
            for (j = 0; j < tempLen - 1; j++) {
                temp[j] = temp[j + 1];
            }
            tempLen--;
        }
        if (tempLen >= len2) {
            int count = 0;
            while (tempLen >= len2) {
                for (j = 0; j < len2; j++) {
                    temp[j] -= num2[j] - '0';
                }
                if (temp[0] < 0) {
                    for (j = 0; j < len2; j++) {
                        temp[j] += num2[j] - '0';
                    }
                    break;
                }
                count++;
            }
            quotient[i] += count;
        }
    }

    // Copy the remainder
    for (i = 0; i < tempLen; i++) {
        remainder[i] = temp[i];
    }
}
void calculator() {
    char input[MAX_INPUT_LENGTH];
    char num1[MAX_DIGITS + 1], num2[MAX_DIGITS + 1];
    int result[MAX_RESULT_DIGITS];
    int quotient[MAX_DIGITS];
    int remainder[MAX_DIGITS];

    while (1) {
        getInput(input);
        //if input is exit stop everything and break
        
        getNumbers(num1, num2);
        char operator = input[length(input) - 1]; // Get the last character as operator
        switch (operator) {
            case '+':
                addNumbers(num1, num2, result);
                printf("Result: ");
                printResult(result, MAX_RESULT_DIGITS);
                break;
            case '-':
                subtractNumbers(num1, num2, result);
                printf("Result: ");
                printResult(result, MAX_RESULT_DIGITS);
                break;
            case '*':
                // Implement multiplication function here
                break;
            case '/':
                divideNumbers(num1, num2, quotient, remainder);
                printf("Quotient: ");
                printResult(quotient, MAX_DIGITS);
                printf("Remainder: ");
                printResult(remainder, MAX_DIGITS);
                break;
            default:
                printf("Invalid operator\n");
        }
    }
    printf("Exiting calculator...\n");
}
void printResult(int *result, int size) {
    int i = 0;
    while (i < size && result[i] == 0) {
        i++;
    }
    if (i == size) {
        printf("0\n");
    } else {
        for (; i < size; i++) {
            printf("%d", result[i]);
        }
        printf("\n");
    }
}
void multiplyNumbers(char *num1, char *num2, int *result) {
    int len1 = length(num1);
    int len2 = length(num2);    
    for (int i = 0; i < len1; i++) {
        for (int j = 0; j < len2; j++) {
            result[i + j] += (num1[len1 - 1 - i] - '0') * (num2[len2 - 1 - j] - '0');
            result[i + j + 1] += result[i + j] / 10;
            result[i + j] %= 10;
        }
    }
    // Remove leading zeros
    int i = 0;
    while (i < MAX_DIGITS && result[i] == 0) {
        i++;
    }
    if (i == MAX_DIGITS) {
        result[0] = 0;
    } else {
        for (int j = 0; j < MAX_DIGITS - i; j++) {
            result[j] = result[j + i];
        }
    }
}
