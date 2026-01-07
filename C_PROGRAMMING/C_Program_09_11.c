/*
  C LEVEL 09 Problem 11
  Use only int variables
  Use ont decimals
  use arrays
Question: Get 5 numbers from the user and reverse each number and create a new array and then  print the sum of all numbers in the new array*/
#include <stdio.h>

int main() {
    int original[5];
    int reversed[5];
    int totalSum = 0;

    // 1. Get 5 numbers from the user
    printf("Please enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &original[i]);
    }

    // 2. Reverse each number and store in the new array
    for (int i = 0; i < 5; i++) {
        int num = original[i];
        int rev = 0;

        while (num != 0) {
            int remainder = num % 10;
            rev = rev * 10 + remainder;
            num /= 10;
        }
        
        reversed[i] = rev;
    }

    // 3. Calculate the sum of the reversed array and print results
    printf("\nReversed numbers: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", reversed[i]);
        totalSum += reversed[i];
    }

    printf("\n\nThe sum of all reversed numbers is: %d\n", totalSum);

    return 0;
}
