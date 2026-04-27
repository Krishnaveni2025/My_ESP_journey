/* 
   C LEVEL 07 Problem 06
                  Use only int variables
                  Use only Decimals
                  Use functions with not return value.
                  Don't use Arrays, pointers, strings,etc.
   Question: 
                  Write a loop program to print two digit odd numbers, below 20
   Function Name: 
                  disp_2digit_odd_below20
   Answer:
                  11
                  13
                  15
                  17
                  19
*/
#include<stdio.h>
void disp_2digit_odd_below20(int n);
int main()
{
    int number = 11;
    while(number<20)
    {
        disp_2digit_odd_below20(number);
        number++;
    }
}
void disp_2digit_odd_below20(int n)
{
    if(n%2)
            printf("%d\n",n);
}
