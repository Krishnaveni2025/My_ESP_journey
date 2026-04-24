/* 
   C LEVEL 04 Program 04
            Use only int variables
            Use only Decimals
            Use only "if/else", goto statements. Don't use  "for/while"
            Don't use arrays, pointers, strings, etc.
   Question: 
            Write a loop program to print sum of 6 to 1
   Answer:
            21
  */
#include<stdio.h>
void print_sum_6to1(int n);
int main()
{
    int number = 6;
    print_sum_6to1(number);
}
void print_sum_6to1(int n)
{
    int sum = 0;
    loop:
        if(n>0)
        {
            sum += n;
            n--;
            goto loop;
        }
    printf("%d",sum);
}
