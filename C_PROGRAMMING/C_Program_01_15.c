/* 
    C LEVEL 01 Program 15
            Use only int variables
            Use only Decimals
            Use the following operations only
            +,-,/,*,%
            Do not use any other operations
   Question: 
            Write a program to get a four digit number from the user and 
            only reverse the first two digits of the number (10's and 1's) then 
            print the number
   Example:
            Input:9561 Output:9516
            Input:3859 Output:3895
*/
#include<stdio.h>
int reverse_first2ds(int n);
int ones(int n);
int tens(int n);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    printf("Output: %d",reverse_first2ds(number));
}
int tens(int n)
{
    return ((n/10)%10);
}
int ones(int n)
{
    return n%10;
}
int reverse_first2ds(int n)
{
    return (((n/100)*100)+(ones(n)*10)+(tens(n)));
}
