#include <stdio.h>

// Function to check if a number is prime
int isPrime(int x) {
    if (x <= 1) return 0; // 0 and 1 are not prime
    for (int i = 2; i <= x/2; i++) {
        if (x % i == 0) return 0; // divisible → not prime
    }
    return 1; // prime
}

int main() {
    int n = 5;
    int arr[5], result[5];
    int i, j = 0;

    // Input 5 numbers
    for (i = 0; i < n; i++) {
        printf("Enter %d Element: ", i);
        scanf("%d", &arr[i]);
    }

    // Filter out primes
    for (i = 0; i < n; i++) {
        if (!isPrime(arr[i])) {   // if not prime
            result[j] = arr[i];
            j++;
        }
    }

    // Print the new array
    for (i = 0; i < j; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
