/* C LEVEL 07 Problem 08
         Use only int variables
         Use only Decimals
         Use functions with not return value.
         Don't use Arrays, pointers, strings,etc.
   Question: 
         Write a loop program to print the two digit even numbers, whose sum of digits are 6
   Function Name: 
         disp_2digit_even_sum6
   Answer:
         24
         42
         60
*/
#include<stdio.h>
void disp_2digit_even_sum6(int n);
int main()
{
    int number = 24;
    while(number<=60)
    {
        disp_2digit_even_sum6(number);
        number++;
    }
}
void disp_2digit_even_sum6(int n)
{
    if(!(n%2))
    {
        int sum = (n%10)+(n/10);
        if(sum==6)
                 printf("%d\n",n);
    }
}
