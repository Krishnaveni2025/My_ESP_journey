/* 
   C LEVEL 03 Program 10
            Use int variables
            Use only Decimals
            Use "if/else" statements 
   Question: 
            Get a two digit number from the user and 
            check if the digit 0 is greater than digit 1. 
            If yes then print "Success", otherwise "Failure".
   Example:
            Input:45 Output: Success
            Input:76 Output: Failure
*/
#include<stdio.h>
int digit1(int n);
int digit0(int n);
int main()
{
    int two_dn;
    printf("Input: ");
    scanf("%d",&two_dn);
    if((digit0(two_dn)>digit1(two_dn)))
            printf("Output: Success");
    else
            printf("Output: Failure");
}
int digit1(int n)
{
    return n/10;
}
int digit0(int n)
{
    return n%10;
}
