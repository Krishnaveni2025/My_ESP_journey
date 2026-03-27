/*
  C LEVEL 09 Problem 17
        Use only int variables
        Use ont decimals
        Use arrays
  Question: 
        Adjust the carry in an  integer array 
        (i.e convert the 2 digit number into single digit and add carry to the next number)
*/
#include <stdio.h>

int input1[50], input2[50], output[51];

int main() {
    int i, carry = 0;

    printf("Enter first Array (50 digits):\n");
    for (i = 0; i < 50; i++) {
        printf("Element %d: ",i);
        scanf("%d", &input1[i]);
    }

    printf("Enter second Array (50 digits):\n");
    for (i = 0; i < 50; i++) {
        printf("Element %d: ",i);
        scanf("%d", &input2[i]);
    }

    // Add from rightmost digit
    for (i = 49; i >= 0; i--) {
        int sum = input1[i] + input2[i] + carry;
        output[i + 1] = sum % 10;   // store single digit
        carry = sum / 10;           // update carry
    }

    // Handle final carry
    output[0] = carry;

    // Print result
    printf("Result = ");
    for (i = 0; i < 51; i++) {
        if (i == 0 && output[i] == 0) continue; // skip leading zero
        printf("%d", output[i]);
    }
    printf("\n");

    return 0;
}
