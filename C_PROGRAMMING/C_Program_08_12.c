/* 
   C LEVEL 08 Problem 12
                    Use only int variables
                    Use only Decimals
                    Use Functions with a return value
                    Do not use arrays, strings, pointers, etc.
   Question: 
                    Write a program to get a number from the user and 
                    print the total number of two-digit odd numbers in the number
   Function Name: 
                    disp_total_2digit_odd
   Answer:
                    Input: 12345678 Output: 3
                    Input: 987531   Output: 4
*/
#include<stdio.h>
int disp_total_2digit_odd(int n);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    printf("Output: %d",disp_total_2digit_odd(number));
    return 0;
}
int disp_total_2digit_odd(int n)
{
    int count = 0;
    while(n>10)
    {
        if((n%100)%2)
                count++;
        n /= 10;
    }
    return count;
}
