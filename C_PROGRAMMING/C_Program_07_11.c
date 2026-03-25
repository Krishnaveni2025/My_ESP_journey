/* C LEVEL 07 Problem 11
         Use only int variables
         Use only Decimals
         Use functions with not return value.
         Don't use Arrays, pointers, strings,etc.
   Question: 
         Write a loop program to get a number from the user and 
         print the total digits in the number
   Function Name: 
         count_total_digits
   Answer:
         Input:123456   Output:6
         Input:76895439 Output:8
         Input:675      Output:3
*/
#include<stdio.h>
void count_total_digits(int n);
int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d",&number);
    count_total_digits(number);
}
void count_total_digits(int n)
{
    int digits = 0;
    while(n)
    {
        digits++;
        n /= 10;
    }
    printf("%d",digits);
}
