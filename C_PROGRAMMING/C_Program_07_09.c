/* 
   C LEVEL 07 Problem 09
                  Use only int variables
                  Use only Decimals
                  Use functions with not return value.
                  Don't use Arrays, pointers, strings,etc.
   Question: 
                  Write a loop program to print the sum of two digit numbers whose one's digit is 5
   Function Name: 
                  disp_2digit_ones5
   Answer:
                  495
*/
#include<stdio.h>
void disp_2digit_ones5(int n);
int main()
{
    int number = 15; 
    disp_2digit_ones5(number);
}
void disp_2digit_ones5(int n)
{
    int sum = 0;
    while(n<=95)
    {
        if((n%10)==5)
                sum+=n;
        n++;
    }
    printf("%d",sum); 
}
