/* C LEVEL 08 Problem 05
        Use only int variables
        Use only Decimals
        Use Functions with a return value
        Do not use arrays, strings, pointers, etc.
   Question: 
        Write a program to get a number from the user and 
        print the total number of digits in that number
   Function Name: 
        count_total_digits
   Answer:
        Input:123456   Output:6
        Input:76895439 Output:8
        Input:675      Output:3
*/
#include<stdio.h>
int count_total_digits(int n);
int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d",&number);
    printf("%d",count_total_digits(number));
}
int count_total_digits(int n)
{
    int count = 0;
    while(n)
    {
        count++;
        n /= 10;
    }
    return count;
}
