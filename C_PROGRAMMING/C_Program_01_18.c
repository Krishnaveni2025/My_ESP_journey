/* 
  C LEVEL 01 Program 18
            Use only int variables
            Use only Decimals
            Use the following operations only
            +,-,/,*,%
            Do not use any other operations
  Question: 
            Get a two - digit number from the user, 
            make the ten's digit 1 and 
            print the number
  Example:
            Input:95 Output:15
            Input:82 Output:12
*/
#include<stdio.h>
int ones(int n);
int make10sd1(int n);
int main()
{
    int twod;
    printf("Input: ");
    scanf("%d",&twod);
    printf("Output: %d",make10sd1(twod));
}
int make10sd1(int n)
{
    return (10+ones(n));
}
int ones(int n)
{
    return n%10;
}
