/* 
   C LEVEL 02 Program 14
            Use only int variables
            Use only Decimals
            Use the following operations only
            +, -, /, *, %, ==, !=, <, >, <=, >=
            Do not use if, for, while, arrays, pointers, strings, etc.
   Question: 
            Get a four digit number from the user and 
            check if first two digits and last two digits are same. 
            If yes then print 1, Otherwise print 0.
   Example:
            Input: 1919    Output: 1
            Input: 6567    Output: 0
  */
#include<stdio.h>
int is1st2dsequaltolast2ds(int n);
int main()
{
    int four_dn;
    printf("Input: ");
    scanf("%d",&four_dn);
    printf("Output: %d",is1st2dsequaltolast2ds(four_dn));
}
int is1st2dsequaltolast2ds(int n)
{
    return ((n%100)==(n/100));
}
