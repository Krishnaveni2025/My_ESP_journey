/* C LEVEL 12 - Problem 01
Use Pointers
  Question: Get two numbers upto 50 digits and perform addition and print the result.
  #include<stdio.h>
  int main()
  {
    getnumbers(number1, number2);
    addnumbers(number1, number2, result);
    print(result);
  }
*/

#include <stdio.h>

void getnumbers(char *n1, char *n2);
void addnumbers(char *n1, char *n2, char *result);
void print(char *result);

int main() {
    char number1[51], number2[51], result[52]; // 50 digits + null, result may need 1 extra digit
    getnumbers(number1, number2);
    addnumbers(number1, number2, result);
    print(result);
    return 0;
}

void getnumbers(char *n1, char *n2) {
    printf("Enter 1st Number (up to 50 digits): ");
    scanf("%50s", n1);
    printf("Enter 2nd Number (up to 50 digits): ");
    scanf("%50s", n2);
    printf("___________________________________________________________________\n");
}

// Manual length function (no string.h)
int mystrlen(char *s) {
    int len = 0;
    while (*s != '\0') {
        len++;
        s++;
    }
    return len;
}

void addnumbers(char *n1, char *n2, char *result) {
    int len1 = mystrlen(n1);
    int len2 = mystrlen(n2);
    int carry = 0, sum;
    int i = len1 - 1;
    int j = len2 - 1;
    int k = 0;

    char temp[52]; // temporary result in reverse order

    while (i >= 0 || j >= 0 || carry > 0) {
        int d1 = (i >= 0) ? n1[i] - '0' : 0;
        int d2 = (j >= 0) ? n2[j] - '0' : 0;

        sum = d1 + d2 + carry;
        temp[k++] = (sum % 10) + '0';
        carry = sum / 10;

        i--;
        j--;
    }

    // Reverse temp into result
    for (int m = 0; m < k; m++) {
        result[m] = temp[k - m - 1];
    }
    result[k] = '\0';
}

void print(char *result) {
    printf("Result\t\t\t\t : %s\n", result);
}
