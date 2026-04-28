/* 
   C LEVEL 08 Problem 04
                    Use only int variables
                    Use only Decimals
                    Use Functions with a return value
                    Do not use arrays, strings, pointers, etc.
   Question: 
                    Write a program to print the sum of the two digit odd numbers whose tens digit is 7
   Function Name: 
                    disp_2digit_odd_sum_tens7
   Answer:
                    375
*/
#include<stdio.h>
int disp_2digit_odd_sum_tens7(int n);
int main()
{
    int number = 70;
    printf("Output: %d",disp_2digit_odd_sum_tens7(number));
    return 0;
}
int disp_2digit_odd_sum_tens7(int n)
{
    int sum = 0;
    while(n<80)
    {
        if(n%2)
        {
            if((n/10)==7)
                sum += n;
        }
        n++;
    }
    return sum;
}
