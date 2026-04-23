/* 
   C LEVEL 03 Program 08
            Use int variables
            Use only Decimals
            Use "if/else" statements 
   Question: 
            Get a two digit number from the user and 
            check if the digit 0 and digit 1 are not identical. 
            If yes then print "Success", otherwise "Failure".
   Example:
            Input:56 Output: Success
            Input:55 Output: Failure
*/
#include<stdio.h>
int digit1(int n);
int digit0(int n);
int isd10notsame(int n);
int main()
{
    int two_dn;
    printf("Input: ");
    scanf("%d",&two_dn);
    if(isd10notsame(two_dn))
            printf("Output: Success");
    else
            printf("Output: Failure");
}
int isd10notsame(int n)
{
    if((digit0(n)!=(digit1(n))))    return 1;
    return 0;
}
int digit0(int n)
{
    return n%10;
}
int digit1(int n)
{ 
    return n/10;
}
