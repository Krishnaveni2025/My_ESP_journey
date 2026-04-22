/* 
   C LEVEL 01 Program 17
            Use only int variables
            Use only Decimals
            Use the following operations only
            +,-,/,*,%
            Do not use any other operations
   Question: 
            Get a two digit number from the user, 
            make the one's digit 0 then print it.
   Example:
            Input:95 Output:90
            Input:18 Output:10
*/
#include<stdio.h>
int ones(int n);
int make1s0(int n);
int main()
{
    int twod_number;
    printf("Input: ");
    scanf("%d",&twod_number);
    printf("Output: %d",make1s0(twod_number));
}
int make1s0(int n)
{
    return (10*ones(n));
}
int ones(int n)
{
    return (n/10);
}
