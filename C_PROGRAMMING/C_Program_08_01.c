/* 
   C LEVEL 08 Problem 01
                    Use only int variables
                    Use only Decimals
                    Use Functions with a return value
                    Do not use arrays, strings, pointers, etc.
   Question: 
                    Write a loop program to print sum of 1 to 5
   Function Name: 
                    disp_sum
   Answer:
                    15
*/
#include<stdio.h>
int disp_sum(int n);
int main()
{
    int number = 1;
    printf("Output: %d",disp_sum(number));
    return 0;
}
int disp_sum(int n)
{
    int sum = 0;
    while(n<6)
    {
        sum += n;
        n++;
    }
    return sum;
}
