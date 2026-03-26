/* C LEVEL 08 Problem 16
        Use only int variables
        Use only Decimals
        Use Functions with a return value
        Do not use arrays, strings, pointers, etc.
  Question: 
        Write a program to print the biggest 4-digit number which is divisible by 7 and 9
  Function Name: 
        disp_biggest_4digit_div7_9 
  Answer:
        9954
  */
#include<stdio.h>
int disp_biggest_4digit_div7_9(int n);
int main()
{
    printf("%d",disp_biggest_4digit_div7_9(1000));
}
int disp_biggest_4digit_div7_9(int n)
{
    int biggest;
    while(n<10000)
    {
        if(!(n%7))
        {
            if(!(n%9))
                biggest = n;
        }
        n++;
    }
    return biggest;
}
