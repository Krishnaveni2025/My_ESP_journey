/* 
   C LEVEL 05 Problem 10
            Use only int variables
            Use only Decimals
            Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            Write a loop program to print sum of two digit odd numbers, who's ten's digit is 7.
   Answer:
            375
*/
#include<stdio.h>
void print_sof2odn_10s7(void);
int main()
{
    print_sof2odn_10s7();
}
void print_sof2odn_10s7(void)
{
    int n = 71, sum = 0;
    for(;;)
    {
        if(n<80)
        {
            if(n%2)
            {
                if((n/10)==7)
                            sum += n;
            }
            n++;
        }
        else
                break;
    }
    printf("%d",sum);
}
