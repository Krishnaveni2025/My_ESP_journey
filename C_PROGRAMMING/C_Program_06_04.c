/*
  C LEVEL 06 Problem 04
            Use only int variables
            Use only Decimals
            Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
  Question: 
            Write a loop program to print sum from 6 to 1
  Answer:
            21
*/
#include<stdio.h>
void print_sum6to1(void);
int main()
{
    print_sum6to1();
}
void print_sum6to1(void)
{
    int n = 6, sum = 0;
    while(1)
    {
        if(n>=1)
        {
            sum += n;
            n--;
        }
        else break;
    }
    printf("Output: %d",sum);
    
}
