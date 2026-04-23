/* 
    C LEVEL 02 Program 09
            Use only int variables
            Use only Decimals
            Use the following operations only
            +, -, /, *, %, ==, !=, <, >, <=, >=
            Do not use if, for, while, arrays, pointers, strings, etc.
    Question: 
            Get a two digit number from the user and 
            check if the digit 0 is less than digit 1. 
            If yes then print 1, Otherwise print 0.
    Example:
            Input: 54    Output: 1
            Input: 45    Output: 0
  */
#include<stdio.h>
int is1slessthan10s(int n);
int ones(int n);
int tens(int n);
int main()
{
    int twodn;
    printf("Input: ");
    scanf("%d",&twodn);
    printf("Output: %d",is1slessthan10s(twodn));
}
int is1slessthan10s(int n)
{
    return (ones(n)<=tens(n));
}
int tens(int n)
{
    return n/10;
}
int ones(int n)
{
    return n%10;
}
