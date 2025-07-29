/*logical programming
Problem 1: print 1 to 20 numbers
algorithm: use a for loop to iterate from 1 to 20 and print each number
or use a while loop to achieve the same result
or use recursion to print numbers from 1 to 20
or use if statements to control the flow of printing numbers
or use a do-while loop to print numbers from 1 to 20
or use a switch-case statement to print numbers from 1 to 20
or use a function to encapsulate the logic of printing numbers from 1 to 20
#include <stdio.h>
int main() {
    for (int i = 1; i <= 20; i++) {//This code prints numbers from 1 to 20 using a for loop.
        printf("%d\n", i);
    }
    return 0;
}
    problem 2: Biggest of two numbers using conditional operator
    syntax: use conditional operator (?:) to find the biggest of two numbers
    algorithm: use conditional operator to find the biggest of two numbers
    algorithm: use if-else statements to find the biggest of two numbers
    algorithm: use a function to encapsulate the logic of finding the biggest of two numbers
#include <stdio.h>
int main() {
    int a ,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int biggest = (a > b) ? a : b;
    printf("Biggest number is: %d\n", biggest);
    return 0;
}
    problem 3: Even or Odd
    syntax: use if-else statements to check if a number is even or odd
    algorithm: use if-else statements to check if a number is even or odd
    algorithm: use a function to encapsulate the logic of checking if a number is even or odd*/
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
    return 0;
}