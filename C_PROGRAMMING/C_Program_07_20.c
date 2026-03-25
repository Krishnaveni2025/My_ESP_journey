/* C LEVEL 07 Problem 20
         Use only int variables
         Use only Decimals
         Use functions with not return value.
         Don't use Arrays, pointers, strings,etc.
   Question: 
         Write a program to print total number single digit prime numbers.
   Function Name: 
         disp_count_single_digit_prime
   Answer:
           4
*/
#include<stdio.h>
void disp_count_single_digit_prime(int n);
int main()
{
    int number = 2;
    disp_count_single_digit_prime(number);
}
void disp_count_single_digit_prime(int n)
{
    int count = 0, divider,  is_prime;
    while(n<9)
    {
        divider = 2, is_prime = 1;
        while(divider<n)
        {
            if(!(n%divider))
            {
                is_prime = 0;
                break;
            }
            divider++;
        }
        if(is_prime)
             count++;
        n++;
    }
    printf("%d",count);
}
