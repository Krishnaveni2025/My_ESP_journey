/* C LEVEL 08 Problem 17
                 Use only int variables
                 Use only Decimals
                 Use Functions with a return value
                 Do not use arrays, strings, pointers, etc.
   Question: 
                 Write a program to print the total count of numbers 
                 which are less than 100000 and whose sum of digits is 14
   Function Name: 
                 disp_count_sum14
   Answer:
                 2710
  */
#include<stdio.h>
int disp_count_sum14(int n);
int main()
{
    printf("%d", disp_count_sum14(59));
}
int disp_count_sum14(int n)
{
    int count = 0, sum, temp;
    while(n<100000)
    {
        sum = 0;
        temp = n;
        while(temp)
        {
            sum += temp%10;
            temp /= 10;
        }
        if(sum == 14)
            count++;
        n++;
    }
    return count;
}
