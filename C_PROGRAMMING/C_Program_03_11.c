/* 
   C LEVEL 03 Program 11
             Use int variables
             Use only Decimals
             Use "if/else" statements 
   Question: 
            Get a two digit number from the user and 
            check if the digit 1 is less than equals to digit 0. 
            If yes then print "Success", otherwise "Failure".
   Example:
            Input:66 Output: Success
            Input:67 Output: Success
            Input:98 Output: Failure
*/
#include<stdio.h>
int digit1(int n);
int digit0(int n);
int main()
{
    int two_dn;
    printf("Input: ");
    scanf("%d",&two_dn);
    if((digit1(two_dn)<=digit0(two_dn)))
            printf("Output: Success");
    else
            printf("Output: Failure");
}
int digit0(int n)
{
    return n%10;
}
int digit1(int n)
{
    return n/10;
} 
