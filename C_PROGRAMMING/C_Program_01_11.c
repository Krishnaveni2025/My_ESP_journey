/* 
    C LEVEL 01 Program 11
            Use only int variables
            Use only Decimals
            Use the following operations only
            +,-,/,*,%
            Do not use any other operations
   Question: 
            Write a program to get a two digit number from the user and 
            print it's sum of digits
   Example:
            Input:56 Output:11
            Input:69 output:15
*/
#include<stdio.h>
int sumofdigits(int n);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    printf("Output: %d",sumofdigits(number));
}
int sumofdigits(int n)
{
    int sum = 0;
    while(n)
    {
        sum += (n%10);
        n /= 10;
    }
    return sum;
}
