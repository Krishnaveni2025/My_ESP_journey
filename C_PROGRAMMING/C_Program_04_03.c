/* 
   C LEVEL 04 Program 03
            Use only int variables
            Use only Decimals
            Use only "if/else", goto statements. Don't use  "for/while"
            Don't use arrays, pointers, strings, etc.
   Question: 
            Write a loop program to print sum of 1 to 5
   Answer:
            15
  */
#include<stdio.h>
void print_sum1to5(int n);
int main()
{
    int number = 1;
    print_sum1to5(number);
}
void print_sum1to5(int n)
{
    int sum = 0;
    loop:
    if(n<6)
    {
        sum += n;
        n++;
        goto loop;
    }
    printf("%d",sum);
}
