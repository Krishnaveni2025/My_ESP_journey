/*
  C LEVEL 06 Problem 07
            Use only int variables
            Use only Decimals
            Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
  Question: 
            Write a loop program to print to two digit odd numbers whose sum of digits are 7
  Answer:
            25
            43
            61
*/
#include<stdio.h>
void print_2dodd_sofd7(void);
int soofd7(int a);
int odd(int a);
int main()
{
    print_2dodd_sofd7();
}
int soofd7(int a)
{
    return (((a%10)+(a/10))==7);
}
int odd(int a)
{
    return (a%2);
}
void print_2dodd_sofd7(void)
{
    int n = 11, sum = 0;
    while(1)
    {
        if(n<70)
        {
            if(odd(n))
            {
                if(soofd7(n))
                        printf("%d\n",n);
            }
            n++;
        }
        else break;
    }
}
