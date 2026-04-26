/* 
  C LEVEL 06 Problem 27
            Use only int variables
            Use only Decimals
            Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
  Question: 
            Write a program to print the total count of numbers which are less than 100000 and 
            whose sum of digits is 14
  Answer:
            2710
*/
#include<stdio.h>
int sum14(int n);
void total_count(void);
int main()
{
    total_count();
}
void total_count(void)
{
    int n = 100000, count = 0;
    while(1)
    {
        if(n>58)
        {
            if(sum14(n))
                    count++;
            n--;
        }
        else break;
    }
    printf("Output: %d",count);
}
int sum14(int n)
{
    int sum = 0;
    while(1)
    {
        if(n)
        {
            sum += (n%10);
            n /= 10;
        }
        else break;
    }
    if(sum==14)
            return 1;
    return 0;
}
