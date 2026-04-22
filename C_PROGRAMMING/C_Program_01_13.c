/* 
    C LEVEL 01 Program 13
            Use only int variables
            Use only Decimals
            Use the following operations only
            +,-,/,*,%
            Do not use any other operations
   Question: 
            Write a program to get a two-digit number from the user and 
            print the reverse of the number
   Example:
            Input:56 Output:65
            Input:59 Output:95
*/
#include<stdio.h>
int reverse(int n);
int main()
{
    int twodigit;
    printf("Input: ");
    scanf("%d",&twodigit);
    printf("Output: %d",reverse(twodigit));
}
int reverse(int n)
{
    return (((n%10)*10)+(n/10));
}
