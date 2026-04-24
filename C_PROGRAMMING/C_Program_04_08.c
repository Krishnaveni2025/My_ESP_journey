/* 
   C LEVEL 04 Program 08
            Use only int variables
            Use only Decimals
            Use only "if/else", goto statements. Don't use  "for/while"
            Don't use arrays, pointers, strings, etc.
   Question: 
            Write a loop program to print two digit even numbers whose sum of digits are 6
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
    loop:
        if(n<61)
        {
            if(!(n%2))
            {
                sum = (n%10)+(n/10);
                if(sum==6)
                {
                    printf("%d\n",n);
                }
            }
            n++;
            goto loop;
        }
}
