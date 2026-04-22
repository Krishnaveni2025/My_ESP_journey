/* 
   C LEVEL 01 Program 23
            Use only int variables
            Use only Decimals
            Use the following operations only
            +,-,/,*,%
            Do not use any other operations
   Question: 
            Get a two digit number from the user and 
            subtract 5 from that number, 
            if the sum of the digits of the number is odd, then
            print the result.
   Example:
            Input:95 Output:95
            Input:72 Output:67
*/
#include<stdio.h>
int sumofdigits(int n);
int main()
{
    int twodn;
    printf("Input: ");
    scanf("%d",&twodn);
    printf("Output: %d",twodn-5*(sumofdigits(twodn)%2));
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
