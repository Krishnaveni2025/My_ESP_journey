//Question 13: Write a program to get number from the user and print the reverse of that number.
/*Answer:
Input:123456 - Output- 654321
Input:76895439- Output - 93459867
Input:675 - Output - 576
*/
/*#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    //Your Code Here
    int digit,reverse =0;
    while(x!=0)
    {
        digit = x%10;
        reverse = (reverse*10)+digit;
        x = x/10;
    }
    printf("%d",reverse);

}*/
/*-------------------Using Functions--------------------------------------*/
#include <stdio.h>
//Functions Declartions
int reverse_number(int num);/*Function1*/
int get_number();/*Function2*/
// Main function
int main() {
    int x = get_number();/*Calling Function2*/
    int reversed_number = reverse_number(x);/*Calling Function1*/
    printf("The reverse of the entered number is %d\n", reversed_number);
    return 0;
}
// Defination of Function to reverse a number
int reverse_number(int num) {
    int digit, reverse = 0;
    while (num != 0) {
        digit = num % 10;
        reverse = (reverse * 10) + digit;
        num = num / 10;
    }
    return reverse;
}

//Defination of  Function to get an integer from the user
int get_number() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    return num;
}
