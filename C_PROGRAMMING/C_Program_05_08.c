/* 
   C LEVEL 05 Problem 08
            Use only int variables
            Use only Decimals
            Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            Write a loop program to print two digit even numbers, who's sum of digits are 6.
   Answer:
            24
            42
            60
  */
#include<stdio.h>
void print_2deven_sofd6(void);
int main()
{
    print_2deven_sofd6();
}
void print_2deven_sofd6(void)
{
    int n = 11, sum;
    for(;;)
    {
        if(n<61)
        {
            if(!(n%2))
            {
                sum = (n%10)+(n/10);
                if(sum==6)
                            printf("%d\n",n);
            }
            n++;
        }
        else
                break;
    }
}
