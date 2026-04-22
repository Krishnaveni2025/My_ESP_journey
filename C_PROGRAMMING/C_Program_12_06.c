/* 
C LEVEL 12 Problem 06
            Use Pointers

Question: 
            Write a Calculator program that will give the "Calc" prompt and 
            always stay on this prompt. When a user types one of the 
            following commands, the program will calculate and give the result.
            
            Typing "Exit" will exit from the Calculator program. 
            This program accepts up to 50-digit numbers. 
            Then, the division will give the quotient and remainder.
            Calc> 12345678967354748+9876546877687678678678678 - Addition
            Calc> 12345678995387837883748798-8738478937937498237 - Subtraction
            Calc> 123478763783847239874 * 34837472384723894732 - Multiplication
            Calc> 1233489374983933498398095/3487384 - Division
            Calc> Exit - Quit
            Note:
                    Do not accept Invalid numbers.
                    Do not print leading zeros.
                    Use functions.
                    Each number can be of a different digit.
                    Make sure that all the Input conditions are taken care.
                    Try to minimize the execution speed.
*/
#include <stdio.h>

#define MAX_SIZE 102

// Prototypes
void addnumbers(char *n1, char *n2, char *r);
void subtractnumbers(char *n1, char *n2, char *r);
void multiplynumbers(char *n1, char *n2, char *r);
void dividenumbers(char *n1, char *n2, char *q, char *r);
int getlen(char *number);
void strcopy(char *src, char *dst);
void reverse(char *number);
void removeleading0s(char *number);
int compare(char *n1, char *n2);
void con_int_char(int *a, int s, char *c);

int main() {
    char input[110], op, number1[51], number2[51], result[MAX_SIZE], remainder[MAX_SIZE];

    while (1) {
        printf("calc>");
        if (scanf("%s", input) <= 0) break;

        if ((input[0] == 'E' || input[0] == 'e') && (input[1] == 'X' || input[1] == 'x') &&
            (input[2] == 'I' || input[2] == 'i') && (input[3] == 'T' || input[3] == 't')) break;

        int i = 0, n1_idx = 0, n2_idx = 0;
        char *p = input;
        while (*p >= '0' && *p <= '9' && n1_idx < 50) number1[n1_idx++] = *p++;
        number1[n1_idx] = '\0';
        op = *p++;
        while (*p >= '0' && *p <= '9' && n2_idx < 50) number2[n2_idx++] = *p++;
        number2[n2_idx] = '\0';

        if (op == '+') {
            addnumbers(number1, number2, result);
            removeleading0s(result);
            printf("%s\n", result);
        } else if (op == '-') {
            if (compare(number1, number2) < 0) {
                subtractnumbers(number2, number1, result);
                removeleading0s(result);
                printf("-%s\n", result);
            } else {
                subtractnumbers(number1, number2, result);
                removeleading0s(result);
                printf("%s\n", result);
            }
        } else if (op == '*') {
            multiplynumbers(number1, number2, result);
            removeleading0s(result);
            printf("%s\n", result);
        } else if (op == '/') {
            if (number2[0] == '0' && number2[1] == '\0') printf("Error: Div by zero\n");
            else {
                dividenumbers(number1, number2, result, remainder);
                removeleading0s(result);
                removeleading0s(remainder);
                printf("Quotient: %s, Remainder: %s\n", result, remainder);
            }
        }
    }
    return 0;
}

void dividenumbers(char *n1, char *n2, char *q, char *r) {
    char temp_dividend[110], next_q[110];
    strcopy("0", q);
    strcopy(n1, temp_dividend);

    while (compare(temp_dividend, n2) >= 0) {
        subtractnumbers(temp_dividend, n2, r); // Result of subtraction goes to 'r'
        strcopy(r, temp_dividend);            // Update dividend for next loop
        addnumbers(q, "1", next_q);           // Increment quotient
        strcopy(next_q, q);
    }
    strcopy(temp_dividend, r); // Final remainder
}

void multiplynumbers(char *n1, char *n2, char *r) {
    int l1 = getlen(n1), l2 = getlen(n2);
    int temp[MAX_SIZE] = {0}; // Must be zero-initialized
    
    for (int i = l1 - 1; i >= 0; i--) {
        for (int j = l2 - 1; j >= 0; j--) {
            int prod = (n1[i] - '0') * (n2[j] - '0') + temp[i + j + 1];
            temp[i + j + 1] = prod % 10;
            temp[i + j] += prod / 10;
        }
    }
    con_int_char(temp, l1 + l2, r);
    removeleading0s(r);
}

void addnumbers(char *n1, char *n2, char *r) {
    int d1, d2, l1 = getlen(n1) - 1, l2 = getlen(n2) - 1, l = 0, carry = 0;
    while (l1 >= 0 || l2 >= 0 || carry > 0) {
        d1 = (l1 >= 0) ? n1[l1--] - '0' : 0;
        d2 = (l2 >= 0) ? n2[l2--] - '0' : 0;
        int sum = d1 + d2 + carry;
        carry = sum / 10;
        r[l++] = (sum % 10) + '0';
    }
    r[l] = '\0';
    reverse(r);
}

void subtractnumbers(char *n1, char *n2, char *r) {
    int i = getlen(n1) - 1, j = getlen(n2) - 1, k = 0, borrow = 0;
    while (i >= 0) {
        int d1 = n1[i--] - '0';
        int d2 = (j >= 0 ? n2[j--] - '0' : 0) + borrow;
        if (d1 < d2) { d1 += 10; borrow = 1; } 
        else borrow = 0;
        r[k++] = (d1 - d2) + '0';
    }
    r[k] = '\0';
    reverse(r);
    removeleading0s(r);
}

// --- Utility Functions ---

void con_int_char(int *a, int s, char *c) {
    int i;
    for (i = 0; i < s; i++) c[i] = a[i] + '0';
    c[i] = '\0';
}

int compare(char *n1, char *n2) {
    int l1 = getlen(n1), l2 = getlen(n2);
    if (l1 > l2) return 1;
    if (l1 < l2) return -1;
    while (*n1) {
        if (*n1 > *n2) return 1;
        if (*n1 < *n2) return -1;
        n1++; n2++;
    }
    return 0;
}

void removeleading0s(char *number) {
    int i = 0, l = getlen(number);
    while (number[i] == '0' && i < l - 1) i++;
    if (i > 0) strcopy(&number[i], number);
}

void reverse(char *number) {
    int l = getlen(number);
    for (int i = 0; i < l / 2; i++) {
        char temp = number[i];
        number[i] = number[l - i - 1];
        number[l - i - 1] = temp;
    }
}

void strcopy(char *src, char *dst) {
    while (*src) *dst++ = *src++;
    *dst = '\0';
}

int getlen(char *number) {
    int l = 0;
    while (number[l]) l++;
    return l;
}
