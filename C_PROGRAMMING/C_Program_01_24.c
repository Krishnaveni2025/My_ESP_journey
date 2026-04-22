/* 
   C LEVEL 01 Program 24
            Use only int variables
            Use only Decimals
            Use the following operations only
            +,-,/,*,%
            Do not use any other operations
   Question: 
            Get a three digit number from the user and 
            subtract 5 from that number 
            if 1's digit number and 100's digit number are odd, 
            then print the result. 
            Do not use "if"
   Example:
            Input:795  Output:790
            Input:372  Output:372
*/
#include<stdio.h>
int ones(int n);
int hundreds(int n);
int main()
{
    int three_dn;
    printf("Input: ");
    scanf("%d",&three_dn);
    printf("Output: %d",(three_dn-(5*( (hundreds(three_dn)%2)*(ones(three_dn)%2) )) ));
}
int hundreds(int n)
{
    return n/100;
}
int ones(int n)
{
    return n%10;
}
