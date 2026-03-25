/* C LEVEL 08 Problem 10
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
    printf("%d",single_prime_count(2));
}
int single_prime_count(int n)
{
    int is_prime , divider, count = 0;
    for(n=2; n<9; n++)
    {
        is_prime = 1;
       for(divider = 2; divider<n; divider++)
         {
            if(!(n%divider))
                {
                    is_prime = 0;
                    break;
                }
         }
         if(is_prime)
                count++;
    }
    return count;
}
