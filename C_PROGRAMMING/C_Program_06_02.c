/*
  C LEVEL 06 Problem 02
           Use only int variables
           Use only Decimals
           Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
           Don't use Arrays, pointers, strings,etc.
  Question: 
           Write a loop program to print 5 to 1 on one by one
  Answer:
           5
           4
           3
           2
           1
*/
#include<stdio.h>
void print_5to1(void);
int main()
{
    print_5to1();
}
void print_5to1(void)
{
    int n = 5;
    while(1)
    {
        if(n>=1)
        {
            printf("%d\n",n);
            n--;
        }
        else
                break;
    }
}
