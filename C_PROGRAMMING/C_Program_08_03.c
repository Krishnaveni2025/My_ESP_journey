/* 
   C LEVEL 08 Problem 03
                    Use only int variables
                    Use only Decimals
                    Use Functions with a return value
                    Do not use arrays, strings, pointers, etc.
   Question: 
                    Write a loop program to print the sum of two digit numbers whose one's digits is 5
   Function Name: 
                    disp_2digit_ones5
   Answer:
                    495
*/
#include<stdio.h>
int disp_2digit_ones5(int n);
int main()
{
    int number = 15;
    printf("Output: %d",disp_2digit_ones5(number));
    return 0;
}
int disp_2digit_ones5(int n)
{
    int sum = 0;
    while(n<96)
    {
        if((n%10)==5)
                sum += n;
        n++;
    }
    return sum;
}
