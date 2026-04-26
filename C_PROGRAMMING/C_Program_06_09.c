/* 
   C LEVEL 06 Problem 09
            Use only int variables
            Use only Decimals
            Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            write a loop program to print the sum of two digit numbers, who's 1's digits is 5
   Answer:
            495
*/
#include<stdio.h>
void print_sof2d_1s5(void);
int ones5(int a);
int main()
{
    print_sof2d_1s5();
}
int ones5(int a)
{
    return ((a%10)==5);
}
void print_sof2d_1s5(void)
{
    int n = 15, sum = 0;
    while(1)
    {
        if(n<96)
        {
            if(ones5(n))
            {
                sum += n;
            }
            n++;
        }
        else    break;
    }
    printf("%d",sum);
}
