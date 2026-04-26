/* 
   C LEVEL 06 Problem 10
            Use only int variables
            Use only Decimals
            Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            write a loop program to print the sum of two digit odd numbers, who's 10's digits is 7
   Answer:
            375
*/
#include<stdio.h>
void print_sofd2dodd_10sd7(void);
int tens7(int a);
int odd(int a);
int main()
{
    print_sofd2dodd_10sd7();
}
void print_sofd2dodd_10sd7(void)
{
    int n = 71, sum = 0;
    while(1)
    {
        if(n<80)
        {
            if(odd(n))
            {
                if(tens7(n))
                        sum += n;
            }
            n++;
        }
        else break;
    }
    printf("Output: %d",sum);
}
int odd(int a)
{
    return (a%2);
}
int tens7(int a)
{
    return ((a/10)==7);
}
