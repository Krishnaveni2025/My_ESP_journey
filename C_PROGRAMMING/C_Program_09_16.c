/*
  C LEVEL 09 Problem 16
  Use only int variables
  Use only decimals
  use arrays
Question: Add two integer arrays upto 50 digits and store the result in an 51 digit array*/
#include <stdio.h>

int input1[50], input2[50], output[51];

int main() {
    int i;

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
        output[i + 1]  = input1[i] + input2[i] ;
    }
    output[0] = 0;

    // Print result
    printf("Result = ");
    for (i = 0; i < 51; i++) {
        if (i == 0 && output[i] == 0) continue; // skip leading zero
        printf("%d", output[i]);
    }
    printf("\n");

    return 0;
}
