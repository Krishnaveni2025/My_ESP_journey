/* 
   C LEVEL 04 Program 05
            Use only int variables
            Use only Decimals
            Use only "if/else", goto statements. Don't use  "for/while"
            Don't use arrays, pointers, strings, etc.
   Question: 
            Write a loop program to print odd number between 1 and 9
   Answer:
            1
            3
            5
            7
            9
  */
#include<stdio.h>
void print_odd_1to9(void);
int main()
{
    print_odd_1to9();
}
void print_odd_1to9(void)
{
    int n = 1;
    loop:
        if(n<10)
        {
            if(n%2)
            {
                printf("%d\n",n);
            }
            n++;
            goto loop;
        }
}
