/* 
   C LEVEL 07 Problem 20
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
void disp_count_single_digit_prime(int a);
int main()
{
    int number = 2;
    disp_count_single_digit_prime(number);
}
void disp_count_single_digit_prime(int a)
{
    int count = 0, i, is_prime;
    while(a<9)
    {
        is_prime = 1;
        for(i = 2; (i*i)<= a; i++)
        {
            if(!(a%i))
            {
                is_prime = 0;
                break;
            }
        }
        if(is_prime)
                count++;
        a++;
    }
    printf("Output: %d",count);
}
