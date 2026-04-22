/* 
    C LEVEL 01 Program 16
            Use only int variables
            Use only Decimals
            Use the following operations only
            +,-,/,*,%
            Do not use any other operations
   Question: 
            Get a four digit number from the user and 
            only reverse last two digits of the number (100's and 1000's)
            then print the number
   Example:
            Input:9561 Output:5961
            Input:3859 Output:8359
*/
#include<stdio.h>
int thousands(int n);
int hundreds(int n);
int reverse_last2(int n);
int main()
{
    int fourd_number;
    printf("Input: ");
    scanf("%d",&fourd_number);
    printf("Output: %d",reverse_last2(fourd_number));
}
int reverse_last2(int n)
{
    return ((hundreds(n)*1000)+(thousands(n)*100)+(n%100));
}
int hundreds(int n)
{
    return ((n/100)%10);
}
int thousands(int n)
{
    return (n/1000);
}
