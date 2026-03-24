/* C LEVEL 07 Problem 07
         Use only int variables
         Use only Decimals
         Use functions with not return value.
         Don't use Arrays, pointers, strings,etc.
Question: Write a loop program to print the two-digit odd numbers, who's sum of digits are 7
Function Name: disp_2digit_odd_sum7
Answer: 
25
43
61
*/
#include<stdio.h>
void disp_2digit_odd_sum7(int n);
int main()
{
    int number = 25;
    while(number<100)
    {
        disp_2digit_odd_sum7(number);
        number++;
    }
}
void disp_2digit_odd_sum7(int n)
{
    if(n%2)
    {
        int sum = (n%10)+(n/10);
        if(sum==7)
                printf("%d\n",n);
    }
}
