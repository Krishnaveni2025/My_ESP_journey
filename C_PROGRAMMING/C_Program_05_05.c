/*
   C LEVEL 05 Problem 05
            Use only int variables
            Use only Decimals
            Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            Write a loop program to print odd number between 1 and 9.
   Answer:
            1
            3
            5
            7
            9
  */
#include<stdio.h>
void print_odd1to9(void);
int main()
{
    print_odd1to9();
}
void print_odd1to9(void)
{
    int n = 1;
    for(; ;)
    {
        if(n<10)
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
