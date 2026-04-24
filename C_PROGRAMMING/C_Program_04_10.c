/* 
   C LEVEL 04 Program 10
            Use only int variables
            Use only Decimals
            Use only "if/else", goto statements. Don't use  "for/while"
            Don't use arrays, pointers, strings, etc.
   Question: 
            Write a loop program to print sum of two digit odd numbers whose ten's digit is 7
   Answer:
            375
  */
#include<stdio.h>
void print_sof2doddn_10s7(void);
int main()
{
    print_sof2doddn_10s7();
}
void print_sof2doddn_10s7(void)
{
    int n = 71, sum = 0;
    loop:
        if(n<80)
        {
            if(n%2)
            {
                if((n/10)==7)
                {
                    sum += n;
                }
            }
            n++;
            goto loop;
        }
    printf("%d",sum);
}
