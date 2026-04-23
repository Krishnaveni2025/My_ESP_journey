/* 
    C LEVEL 02 Program 07
            Use only int variables
            Use only Decimals
            Use the following operations only
            +, -, /, *, %, ==, !=, <, >, <=, >=
            Do not use if, for, while, arrays, pointers, strings, etc.
    Question: 
            Get a two digit number from the user and 
            check if the digit 1 and digit 0 are identical . 
            If yes then print 1, 
            Otherwise print 0.
    Example:
            Input: 55    Output: 1
            Input: 56    Output: 0
  */
#include<stdio.h>
int is1sequalto10s(int n);
int ones(int n);
int tens(int n);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    printf("Output: %d",is1sequalto10s(number));
}
int tens(int n)
{
    return n/10;
}
int ones(int n)
{
    return n%10;
}
int is1sequalto10s(int n)
{
    return (ones(n)==tens(n));
}
