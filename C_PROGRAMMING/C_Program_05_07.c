/*
  C LEVEL 05 Problem 07
            Use only int variables
            Use only Decimals
            Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
  Question: 
            Write a loop program to print two digit odd numbers, who's sum of digits are 7.
  Answer:
            25
            43
            61
  */
#include<stdio.h>
void print_2dodd_sofd7(void);
int main()
{
    print_2dodd_sofd7();
}
void print_2dodd_sofd7(void)
{
    int n = 11, sum;
    for(;;)
    {
        if(n<70)
        {
            if(n%2)
            {
                sum = (n%10)+(n/10);
                if(sum==7)
                        printf("%d\n",n);
            }
            n++;
        }
        else
                break;
    }
}
