/* C LEVEL 07 Problem 10
         Use only int variables
         Use only Decimals
         Use functions with not return value.
         Don't use Arrays, pointers, strings,etc.
   Question: 
         Write a loop program to print the sum of two digit odd numbers, whose ten's digit is 7
   Function Name: 
         disp_2digit_odd_sum_tens7
   Answer:
         375
*/
#include<stdio.h>
void disp_2digit_odd_sum_tens7(int n);
int main()
{
    int number = 71; 
    disp_2digit_odd_sum_tens7(number);
}
void disp_2digit_odd_sum_tens7(int n)
{
    int sum = 0;
    while(n<80)
    {
        if(n%2)
        {
            if((n/10)==7)
                sum+=n;
        }
        n++;
    }
    printf("%d",sum);
}
