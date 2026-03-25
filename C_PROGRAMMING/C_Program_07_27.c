/* C LEVEL 07 Problem 27
         Use only int variables
         Use only Decimals
         Use functions with not return value.
         Don't use Arrays, pointers, strings,etc.
   Question: 
         Write a program to print the total count of numbers 
         which are less than 100000 and whose sum of digits is 14
   Function Name: 
         disp_count_sum14
   Answer:
         2710
  */

#include<stdio.h>
void disp_count_sum14(int n);
int main()
{
    disp_count_sum14(59);
}
void disp_count_sum14(int n)
{
    int count = 0, sum,temp;
    while(n<100000)
    {
        sum = 0;
        temp = n;
        while(temp)
        {
            sum += (temp%10);
            temp/=10;
        }
        if(sum==14)
                count++;
        n++;
    }
    printf("%d",count);
}
