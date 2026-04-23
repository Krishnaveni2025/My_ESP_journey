/*
   C LEVEL 02 Program 13
            Use only int variables
            Use only Decimals
            Use the following operations only
            +, -, /, *, %, &, ==, !=, <, >, <=, >=
            Do not use if, for, while, arrays, pointers, strings, etc.
   Question: 
            Get a three digit number from the user and 
            check if the digit 0 and digit 1 are same and 
            if digit 1 and 2 are different. 
            If yes then print 1, Otherwise print 0.
   Example:
            Input: 988    Output: 1
            Input: 567    Output: 0
  */
#include<stdio.h>
int isd01same(int n);
int isd12diff(int n);
int digit2(int n);
int digit1(int n);
int digit0(int n);
int main()
{
    int three_dn;
    printf("Input: ");
    scanf("%d",&three_dn);
    printf("Output: %d",(isd12diff(three_dn)*isd01same(three_dn)));
}
int isd12diff(int n)
{
    return (digit1(n)!=(digit2(n)));
}
int isd01same(int n)
{
    return (digit0(n)==(digit1(n)));
}
int digit0(int n)
{
    return n%10;
}
int digit1(int n)
{
    return (n/10)%10;
}
int digit2(int n)
{
    return n/100;
}
