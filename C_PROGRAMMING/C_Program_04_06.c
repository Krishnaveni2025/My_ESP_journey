/* 
   C LEVEL 04 Program 06
            Use only int variables
            Use only Decimals
            Use only "if/else", goto statements. Don't use  "for/while"
            Don't use arrays, pointers, strings, etc.
   Question: 
            Write a loop program to print two digit odd numbers below 20
   Answer:  
            11
            13
            15
            17
            19
  */
#include<stdio.h>
void print_2dodd_below20(void);
int main()
{
    print_2dodd_below20();
}
void print_2dodd_below20(void)
{
    int n;
    n = 11;
    loop:
        if(n<20)
        {
            if(n%2)
            {
                printf("%d\n",n);
            }
            n++;
            goto loop;
        }
}
