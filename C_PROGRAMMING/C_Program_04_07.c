/* 
   C LEVEL 04 Program 07
            Use only int variables
            Use only Decimals
            Use only "if/else", goto statements. Don't use  "for/while"
            Don't use arrays, pointers, strings, etc.
   Question: 
            Write a loop program to print two digit odd numbers whose sum of digits are 7
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
    loop:
        if(n<70)
        {
            if(n%2)
            {
                sum = (n/10)+(n%10);
                if(sum==7)
                {
                    printf("%d\n",n);
                }
            }
            n++;
            goto loop;
        }
}
