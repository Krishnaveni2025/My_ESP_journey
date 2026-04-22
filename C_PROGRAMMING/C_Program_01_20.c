/* 
   C LEVEL 01 Program 20
            Use only int variables
            Use only Decimals
            Use the following operations only
            +,-,/,*,%
            Do not use any other operations
   Question: 
            Get a three digit number from the user, 
            make the ten's digit 0, then print it
   Example:
            Input:695 Output:605
            Input:182 Output:102
*/
#include<stdio.h>
int make10sd(int n);
int hundreds_d(int n);
int ones_d(int n);
int main()
{
    int three_dn;
    printf("Input: ");
    scanf("%d",&three_dn);
    printf("Output: %d",make10sd(three_dn));
}
int ones_d(int n)
{
    return n%10;
}
int hundreds_d(int n)
{
    return n/100;
}
int make10sd(int n)
{
    return ((hundreds_d(n)*100)+(ones_d(n)));
}
