/* 
   C LEVEL 07 Problem 27
                    Use only int variables
                    Use only Decimals
                    Use functions with not return value.
                    Don't use Arrays, pointers, strings,etc.
   Question: 
                    Write a program to print the total count of numbers 
                    which are less than 100000 and whose sum of digits is 14
   Function Name: 
                    disp_count_sum14
   Answer:
                    2710
*/
#include<stdio.h>
void disp_count_sum14(int a);
int main()
{
    int number = 100000;
    disp_count_sum14(number);
}
void disp_count_sum14(int a)
{
    int count = 0, sum, temp;
    while(a>58)
    {
        sum = 0;
        temp = a;
        while(temp)
        {
            sum += (temp%10);
            temp /= 10;
        }
        if(sum==14)
                count++;
        a--;
    }
    printf("Output: %d",count);
}
