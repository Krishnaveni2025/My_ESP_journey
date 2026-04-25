/* 
   C LEVEL 05 Problem 09
            Use only int variables
            Use only Decimals
            Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            Write a loop program to print sum of two digit numbers, who's one's digit is 5.
   Answer:
            495
  */
#include<stdio.h>
void print_sofd_1s5(void);
int main()
{
    print_sofd_1s5();
}
void print_sofd_1s5(void)
{
    int n = 15, sum = 0;
    for(;;)
    {
        if(n<96)
        {
            if((n%10)==5)
            {
                sum += n;
            }
            n++;
        }
        else
                break;
    }
    printf("%d",sum);
}
