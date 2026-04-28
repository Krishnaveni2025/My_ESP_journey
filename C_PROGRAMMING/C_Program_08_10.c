/* 
   C LEVEL 08 Problem 10
                    Use only int variables
                    Use only Decimals
                    Use Functions with a return value
                    Do not use arrays, strings, pointers, etc.
   Question: 
                    Write a program to print total number of single digit prime numbers
   Function Name: 
                    single_prime_count
   Answer:
                    4
*/
#include<stdio.h>
int single_prime_count(int n);
int main()
{
    int number = 2;
    printf("Output: %d",single_prime_count(number));
    return 0;
}
int single_prime_count(int n)
{
    int i, count = 0, is_prime = 1;
    while(n<9)
    {
        is_prime = 1;
        for(i = 2; i<n; i++)
        {
            if(!(n%i))
            {
                is_prime = 0;
                break;
            }
        }
        if(is_prime)
                    count++;
        n++;
    }
    return count;
}
