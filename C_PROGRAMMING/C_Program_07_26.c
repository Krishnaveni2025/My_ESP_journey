/* 
   C LEVEL 07 Problem 26
                    Use only int variables
                    Use only Decimals
                    Use functions with not return value.
                    Don't use Arrays, pointers, strings,etc.
   Question: 
                    Write a program to print the biggest 4-digit number which is divisible by 7 and 9
   Function Name: 
                    disp_biggest_4digit_div7_9 
   Answer:
                    9954
*/
#include<stdio.h>
void disp_biggest_4digit_div7_9(int a);
int main()
{
    int number = 1000;
    disp_biggest_4digit_div7_9(number);
}
void disp_biggest_4digit_div7_9(int a)
{
    int big;
    while(a<10000)
    {
        if(!(a%7))
        {
            if(!(a%9))
                    big = a;
        }
        a++;
    }
    printf("Output: %d",big);
}
