/* 
   C LEVEL 01 Program 19
            Use only int variables
            Use only Decimals
            Use the following operations only
            +,-,/,*,%
            Do not use any other operations
   Question: 
            Get a three digit number from the user, 
            make the one's digit 2 and 
            then print it
   Example:
            Input:695 Output:692
            Input:181 Output:182
*/
#include<stdio.h>
int make1sd2(int n);
int main()
{
    int three_dn;
    printf("Input: ");
    scanf("%d",&three_dn);
    printf("Output: %d",make1sd2(three_dn));
}
int make1sd2(int n)
{
    return (((n/10)*10)+2);
}
