/* C LEVEL 07 Problem 26
         Use only int variables
         Use only Decimals
         Use functions with not return value.
         Don't use Arrays, pointers, strings,etc.
   Question: 
         Write a program to print the biggest 4-digit number which is divisible by 7 and 9
   Function Name: 
         disp_biggest_4digit_div7_9 
   Answer:
         9954
  */
#include<stdio.h>
void disp_biggest_4digit_div7_9(int n);
int main()
{
    disp_biggest_4digit_div7_9(1000);
}
void disp_biggest_4digit_div7_9(int n)
{
    int big;
    while(n<10000)
    {
        if(!(n%7))
        {
            if(!(n%9))
                    big = n;
        }
        n++;
    }
    printf("%d",big);
}
