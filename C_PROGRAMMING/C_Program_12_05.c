/* C LEVEL 12 - Problem 05
Use Pointers
  Question: Write a program to multiply upto 50 digit numbers.
  #include<stdio.h>
  int main()
  {
    getnumbers(number1, number2);
    multiplynumbers(number1, number2, result);
    print(result);
  }
*/
#include <stdio.h>

// Function prototypes
void getnumbers(char *n1, char *n2);
void multiplynumbers(char *n1, char *n2, char *result);
void print(char *result);

// Manual string length function (no string.h)
int mystrlen(char *s) {
    int len = 0;
    while (*s != '\0') {
        len++;
        s++;
    }
    return len;
}

int main() {
    char number1[51], number2[51], result[102]; // 50 digits each → result up to 100 digits
    getnumbers(number1, number2);
    multiplynumbers(number1, number2, result);
    print(result);
    return 0;
}

void getnumbers(char *n1, char *n2) {
    printf("Enter 1st Number (up to 50 digits): ");
    scanf("%50s", n1);
    printf("Enter 2nd Number (up to 50 digits): ");
    scanf("%50s", n2);
    printf("____________________________________________________________\n");
}

void multiplynumbers(char *n1, char *n2, char *result) {
    int len1 = mystrlen(n1);
    int len2 = mystrlen(n2);
    int temp[102] = {0}; // store intermediate results

    // Multiply digit by digit (from right to left)
    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int d1 = n1[i] - '0';
            int d2 = n2[j] - '0';
            temp[i + j + 1] += d1 * d2;
        }
    }

    // Handle carries
    for (int k = len1 + len2 - 1; k > 0; k--) {
        if (temp[k] >= 10) {
            temp[k - 1] += temp[k] / 10;
            temp[k] %= 10;
        }
    }

    // Convert to string (skip leading zeros)
    int start = 0;
    while (start < len1 + len2 - 1 && temp[start] == 0) {
        start++;
    }

    int pos = 0;
    for (int m = start; m < len1 + len2; m++) {
        result[pos++] = temp[m] + '0';
    }
    result[pos] = '\0';
}

void print(char *result) {
    printf("Result: %s\n", result);
}
