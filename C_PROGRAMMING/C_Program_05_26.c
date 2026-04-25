/* 
   C LEVEL 05 Problem 26
            Use only int variables
            Use only Decimals
            Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            Write a program to print the biggest 4-digit number which is divisible by 7 and 9
   Answer:
            9954
*/
#include<stdio.h>
int bigg4d_divby7_9(void);
int main()
{
    printf("Output: %d",bigg4d_divby7_9());
}
int bigg4d_divby7_9(void)
{
    int big, n = 1000;
    for(;;)
    {
        if(n<10000)
        {
            if(!(n%7))
            {
                if(!(n%9))
                        big = n;
            }
            n++;
        }
        else
                break;
    }
    return big;
}
