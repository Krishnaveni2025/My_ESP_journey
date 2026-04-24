/* 
   C LEVEL 05 Problem 01
            Use only int variables
            Use only Decimals
            Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            Write a loop program to print 1 to 5 on one by one.
   Answer: 
            1
            2
            3
            4
            5
*/
void print_1to5(void);
#include<stdio.h>
int main()
{
    print_1to5();
}
void print_1to5(void)
{
    int n = 1;
    for(;;)
    {
        if(n<6)
        {
            printf("%d\n",n);
            n++;
        }
        else
                break;
    }
}
