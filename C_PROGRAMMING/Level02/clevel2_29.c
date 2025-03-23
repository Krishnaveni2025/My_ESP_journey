//Question: Write a program to get three numbers from user and print the LCM of 
//those numbers.
/*#include<stdio.h>
int main()
{
    int num1, num2,num3,temp,lcm;
    printf("Enter two numbers: ");
    scanf("%d    %d",&num1,&num2);
    int a=num1;
    int b=num2;
    while (b!=0){
    temp=b;
    b=a%b;
    a=temp;}
    int gcd1=a;
    a=gcd1;
    b=num3;
    while (b!=0){
    temp=b;
    b=a%b;
    a=temp;}
    int gcd2=a;
    lcm=(num1*num2*num3)/gcd2;
    printf("LCM of %d and %d is %d",&num1,&num2,&lcm);
}
*/
/*Using Functions*/
#include <stdio.h>
/*Functions Declarations*/
int gcd(int a, int b);/*function1*/
int lcm(int a, int b);/*function2*/
int lcm_of_three(int a, int b, int c);/*Function3*/

int main() {
    int num1, num2, num3;

    // Get three numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);

    // Calculate and print the LCM of the three numbers
    int result = lcm_of_three(num1, num2, num3);//Calling function3
    printf("The LCM of %d, %d, and %d is %d\n", num1, num2, num3, result);

    return 0;
}
//Defination  of Function1 to calculate the Greatest Common Divisor (GCD) using the Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

//Defination of Function2 to calculate the Least Common Multiple (LCM) of two numbers
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);//Calling Function1
}

// Function3 to calculate the LCM of three numbers
int lcm_of_three(int a, int b, int c) {
    return lcm(lcm(a, b), c);/*Calling Function2*/
}
