/* 
   C LEVEL 05 Problem 03
            Use only int variables
            Use only Decimals
            Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            Write a loop program to print sum of 1 to 5.
   Answer:
            15
  */
#include<stdio.h>
void print_sum1to5(void);
int main()
{
    print_sum1to5();
}
void print_sum1to5(void)
{
    int n = 1, sum = 0;
    for(;;)
    {
        if(n<6)
        {
            sum += n;
            n++;
        }
        else
                break;
    }
    printf("%d",sum);
}
