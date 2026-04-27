/* 
   C LEVEL 07 Problem 05
                    Use only int variables
                    Use only Decimals
                    Use functions with not return value.
                    Don't use Arrays, pointers, strings,etc.
   Question: 
                    Write a loop program to print odd numbers between 1 and 9
   Function Name: 
                    disp_odd
   Answer:
                    1
                    3
                    5
                    7
                    9
*/
#include<stdio.h>
void disp_odd(int n);
int main()
{
    int number = 1;
    while(number<10)
    {
        disp_odd(number);
        number++;
    }
}
void disp_odd(int n)
{
    if(n%2)             
        printf("%d\n",n);
}
