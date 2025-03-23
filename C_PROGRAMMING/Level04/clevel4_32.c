//Question: Total number of prime numbers below 1,000,000 have the sum of their digits
//equal to 14?
//Example: 59. 5 + 9 = 14
#include <stdio.h>
#include <stdbool.h>
//Declaration of Functions
bool is_prime(int num);/*Function1*/
int sum_of_digits(int num);/*Function2*/
int main() {
    int count = 0;
    for (int i = 2; i < 1000000; i++) {
        if (is_prime(i) && sum_of_digits(i) == 14) {/*Calling Function1&2*/
            count++;
        }
    }
    printf("Total prime numbers with sum of digits equal to 14: %d\n", count);
    return 0;
}
//Defination of Function1 to check if a number is prime
bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function2 Defination to calculate the sum of digits
int sum_of_digits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}