/* 
   C LEVEL 03 Program 07
            Use int variables
            Use only Decimals
            Use "if/else" statements 
   Question: 
            Get a two digit number from the user and 
            check if the digit 0 and digit 1 are identical. 
            If yes then print "Success", otherwise "Failure".
   Example:
            Input:55 Output:"Success"
            Input:56 Output:"Failure"
*/
#include<stdio.h>
int isd01same(int n);
int digit0(int n);
int digit1(int n);
int main()
{
    int two_dn;
    printf("Input: ");
    scanf("%d",&two_dn);
    if(isd01same(two_dn))
            printf("Output: Success");
    else
            printf("Output: Failure");
}
int isd01same(int n)
{
    if(digit1(n)==(digit0(n)))  return 1;
    return 0;
}
int digit1(int n)
{
    return n/10;
}
int digit0(int n)
{
    return n%10;
}
