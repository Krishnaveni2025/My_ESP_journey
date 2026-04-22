/* 
    C LEVEL 01 Program 14
            Use only int variables
            Use only Decimals
            Use the following operations only
            +,-,/,*,%
            Do not use any other operations
   Question: 
            Write a program to get a number from the user and 
            print the reverse of the number.
   Example:
            Input:561 Output:165
            Input:859 Output:958
*/
#include<stdio.h>
int reverse(int n);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    printf("Output: %d",reverse(number));
}
int reverse(int n)
{
    int rev = 0;
    while(n)
    {
        rev = (rev*10) + (n%10);
        n /= 10;
    }
    return rev;
}
