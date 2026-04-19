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

void addnumbers(char *n1, char *n2, char *r);
void subtractnumbers(char *n1, char *n2, char *r);
void multiplynumbers(char *n1, char *n2, char *r);
void dividenumbers(char *n1, char *n2, char *q, char *rem);

int getlen(char *n);
void reverse(char *str);
void strcopy(char *src, char *dst);
int compare(char *n1, char *n2);
void removeleading0s(char *str);
void covert_int_char(int *a, int s, char *str);

int main() {
    char input[150], n1[60], n2[60], res[120], rem[60];
    char op;

    while (1) {
        printf("Calc> ");
        // Reading the whole line manually to simulate a real terminal prompt
        if (scanf("%s", input) == 0) break;

        // Check for Exit
        if ((input[0] == 'E' || input[0] == 'e') && 
            (input[1] == 'x' || input[1] == 'X')) break;

        // Parser: Split the string based on the operator
        int i = 0, j = 0, found_op = 0;
        op = '\0';
        while (input[i] != '\0') {
            if (input[i] >= '0' && input[i] <= '9') {
                if (!found_op) n1[j++] = input[i];
                else n2[j++] = input[i];
            } else if (input[i] == '+' || input[i] == '-' || input[i] == '*' || input[i] == '/') {
                n1[j] = '\0'; // Terminate first number
                op = input[i];
                found_op = 1;
                j = 0; // Reset index for second number
            }
            i++;
        }
        n2[j] = '\0';

        if (!found_op) {
            printf("Invalid Format\n");
            continue;
        }

        // Processing
        if (op == '+') {
            addnumbers(n1, n2, res);
            printf("%s\n", res);
        } else if (op == '-') {
            subtractnumbers(n1, n2, res);
            printf("%s\n", res);
        } else if (op == '*') {
            multiplynumbers(n1, n2, res);
            printf("%s\n", res);
        } else if (op == '/') {
            if (n2[0] == '0' && n2[1] == '\0') {
                printf("Error: Division by zero\n");
            } else {
                dividenumbers(n1, n2, res, rem);
                removeleading0s(res);
                removeleading0s(rem);
                printf("Quotient: %s, Remainder: %s\n", res, rem);
            }
        }
    }
    return 0;
}

// --- Logic Implementation ---

void addnumbers(char *n1, char *n2, char *r) {
    int l1 = getlen(n1) - 1, l2 = getlen(n2) - 1, carry = 0, k = 0;
    while (l1 >= 0 || l2 >= 0 || carry) {
        int d1 = (l1 >= 0) ? n1[l1--] - '0' : 0;
        int d2 = (l2 >= 0) ? n2[l2--] - '0' : 0;
        int sum = d1 + d2 + carry;
        r[k++] = (sum % 10) + '0';
        carry = sum / 10;
    }
    r[k] = '\0';
    reverse(r);
}

void subtractnumbers(char *n1, char *n2, char *r) {
    int cmp = compare(n1, n2);
    if (cmp == 0) { r[0] = '0'; r[1] = '\0'; return; }
    char *large = (cmp == 1) ? n1 : n2;
    char *small = (cmp == 1) ? n2 : n1;
    int l1 = getlen(large) - 1, l2 = getlen(small) - 1, k = 0, borrow = 0;
    while (l1 >= 0) {
        int d1 = large[l1--] - '0';
        int d2 = (l2 >= 0) ? small[l2--] - '0' : 0;
        int diff = d1 - d2 - borrow;
        if (diff < 0) { diff += 10; borrow = 1; }
        else borrow = 0;
        r[k++] = diff + '0';
    }
    if (cmp == -1) r[k++] = '-';
    r[k] = '\0';
    reverse(r);
    removeleading0s(r);
}

void multiplynumbers(char *n1, char *n2, char *r) {
    int l1 = getlen(n1), l2 = getlen(n2);
    int temp[120];
    for (int i = 0; i < 120; i++) temp[i] = 0;
    for (int i = l1 - 1; i >= 0; i--) {
        for (int j = l2 - 1; j >= 0; j--) {
            int prod = (n1[i] - '0') * (n2[j] - '0') + temp[i + j + 1];
            temp[i + j + 1] = prod % 10;
            temp[i + j] += prod / 10;
        }
    }
    covert_int_char(temp, l1 + l2, r);
    removeleading0s(r);
}

void dividenumbers(char *n1, char *n2, char *q, char *rem) {
    char current[60] = "", temp_sub[60] = "";
    int k = 0, l1 = getlen(n1);
    for (int i = 0; i < l1; i++) {
        int len = getlen(current);
        current[len] = n1[i];
        current[len + 1] = '\0';
        removeleading0s(current);
        int count = 0;
        while (compare(current, n2) >= 0) {
            subtractnumbers(current, n2, temp_sub);
            strcopy(temp_sub, current);
            count++;
        }
        q[k++] = count + '0';
    }
    q[k] = '\0';
    strcopy(current, rem);
}

// --- Helper Functions ---

int getlen(char *n) {
    int l = 0;
    while (n[l]) l++;
    return l;
}

void reverse(char *str) {
    int l = getlen(str);
    for (int i = 0; i < l / 2; i++) {
        char t = str[i];
        str[i] = str[l - i - 1];
        str[l - i - 1] = t;
    }
}

void strcopy(char *src, char *dst) {
    int i = 0;
    while (src[i] != '\0') { dst[i] = src[i]; i++; }
    dst[i] = '\0';
}

int compare(char *n1, char *n2) {
    removeleading0s(n1); removeleading0s(n2);
    int l1 = getlen(n1), l2 = getlen(n2);
    if (l1 > l2) return 1;
    if (l1 < l2) return -1;
    for (int i = 0; i < l1; i++) {
        if (n1[i] > n2[i]) return 1;
        if (n1[i] < n2[i]) return -1;
    }
    return 0;
}

void removeleading0s(char *str) {
    int i = 0, l = getlen(str);
    int start = (str[0] == '-') ? 1 : 0;
    while (str[start + i] == '0' && (start + i) < l - 1) i++;
    if (i > 0) strcopy(&str[start + i], &str[start]);
}

void covert_int_char(int *a, int s, char *str) {
    int i;
    for (i = 0; i < s; i++) str[i] = a[i] + '0';
    str[i] = '\0';
}
