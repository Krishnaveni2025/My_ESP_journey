/* 
   C LEVEL 03 Program 13
            Use int variables
            Use only Decimals
            Use "if/else" statements 
   Question: 
            Get a three digit number from the user and 
            check if the digit 1 and digit 0 are identical and 
            digit 1 and digit 2 are different . 
            If yes then print "Success", otherwise "Failure".
   Example:
            Input:988 Output: Success
            Input:567 Output: Failure
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
    if(isd12diff(three_dn))
    {
        if(isd01same(three_dn))
        {
            printf("Output: Success");
        }
        else
            printf("Output: Failure");
    }
    else
            printf("Output: Failure");
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
