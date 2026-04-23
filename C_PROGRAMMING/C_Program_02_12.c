/* 
   C LEVEL 02 Program 12
            Use only int variables
            Use only Decimals
            Use the following operations only
            +, -, /, *, %, ==, !=, <, >, <=, >=
            Do not use if, for, while, arrays, pointers, strings, etc.
   Question: 
            Get a two digit number from the user and 
            check if the digit 1 is greater than or equal to digit 0. 
            If yes then print 1, Otherwise print 0.
   Example:
            Input: 66    Output: 1
            Input: 67    Output: 0
            Input: 98    Output: 1
  */
#include<stdio.h>
int isd1greaterthanequald0(int n);
int digit1(int n);
int digit0(int n);
int main()
{
    int twodn;
    printf("Input: ");
    scanf("%d",&twodn);
    printf("Output: %d",isd1greaterthanequald0(twodn));
}
int digit1(int n)
{
    return n/10;
}
int digit0(int n)
{
    return n%10;
}
int isd1greaterthanequald0(int n)
{
    return (digit1(n)>=digit0(n));
}
