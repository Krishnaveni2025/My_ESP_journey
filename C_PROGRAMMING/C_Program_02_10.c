/* 
    C LEVEL 02 Program 10
            Use only int variables
            Use only Decimals
            Use the following operations only
            +, -, /, *, %, ==, !=, <, >, <=, >=
            Do not use if, for, while, arrays, pointers, strings, etc.
    Question: 
            Get a two digit number from the user and 
            check if the digit 0 is greater than digit 1. 
            If yes then print 1, Otherwise print 0.
    Example:
            Input: 45    Output: 1
            Input: 76    Output: 0
  */
#include<stdio.h>
int digit0(int n);
int digit1(int n);
int isd0greaterthand1(int n);
int main()
{
    int twodn;
    printf("Input: ");
    scanf("%d",&twodn);
    printf("Output: %d",isd0greaterthand1(twodn));
}
int isd0greaterthand1(int n)
{
    return (digit0(n)>digit1(n));
}
int digit1(int n)
{
    return n/10;
}
int digit0(int n)
{
    return n%10;
}
