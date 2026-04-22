/* 
    C LEVEL 01 Program 12
            Use only int variables
            Use only Decimals
            Use the following operations only
            +,-,/,*,%
            Do not use any other operations
   Question: 
            Write a program to get a three digit number from the user and 
            print it's sum of digits
   Example: 
            Input:562 Output:13
            Input:469 Output:19
*/
#include<stdio.h>
int sumofdigits(int n);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    printf("Output: %d",sumofdigits(number));
}
int sumofdigits(int n)
{
    return ((n/100)+(n%10)+((n/10)%10));
}
