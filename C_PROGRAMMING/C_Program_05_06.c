/* 
   C LEVEL 05 Problem 06
            Use only int variables
            Use only Decimals
            Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            Write a loop program to print two digit odd numbers, below 20.
   Answer: 
            11
            13
            15
            17
            19
  */
#include<stdio.h>
void print_odd_below20(void);
int main()
{
    print_odd_below20();
}
void print_odd_below20(void)
{
    int n = 11;
    for(; ;)
    {
        if(n<20)
        {
            if(n%2)
            {
                printf("%d\n",n);
            }
            n++;
        }
        else
                break;
    }
}
