/* 
   C LEVEL 05 Problem 27
            Use only int variables
            Use only Decimals
            Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            Write a program to print the total count of numbers 
            which are less than 100000 and whose sum of digits is 14
   Answer:
            2710
*/
#include<stdio.h>
void result(void);
int isSum14(int n);
int main()
{
    result();
}
int isSum14(int n)
{
    int sum = 0;
    for(;;)
    {
        if(n)
        {
            sum += (n%10);
            n /= 10;
        }
        else
                break;
    }
    if(sum==14) return 1;
    return 0;
}
void result(void)
{
    int n = 100000, count = 0;
    for(;;)
    {
        if(n>58)
        {
            if(isSum14(n))
                    count++;
            n--;
        }
        else
                break;
    }
    printf("%d",count);
}
