//Question: Write a program to get two numbers from user and 
//print the LCM of those numbers.
/*#include<stdio.h>
int main()
{
    int num1, num2,temp,lcm;
    printf("Enter two numbers: ");
    scanf("%d    %d",&num1,&num2);
    int a=num1;
    int b=num2;
    while (b!=0){
    temp=b;
    b=a%b;
    a=temp;}
    lcm=(num1*num2)/a;
    printf("LCM of %d and %d is %d",&num1,&num2,&lcm);
}*/
/*Using Functions*/
#include <stdio.h>
/*Functions Declarations*/
int gcd(int a, int b);
int lcm(int a, int b);
int main() {
    int num1, num2;

    // Get two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate and print the LCM
    int result = lcm(num1, num2);//Calling Function2
    printf("The LCM of %d and %d is %d\n", num1, num2, result);

    return 0;
}
//Defination of  Function1 to calculate the Greatest Common Divisor (GCD) using the Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
// Defination of Function2 to calculate the Least Common Multiple (LCM)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);//Calling Function 1
}