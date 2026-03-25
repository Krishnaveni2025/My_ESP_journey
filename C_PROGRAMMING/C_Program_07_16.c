/* C LEVEL 07 Problem 16
         Use only int variables
         Use only Decimals
         Use functions with not return value.
         Don't use Arrays, pointers, strings,etc.
   Question: 
         Write a program to get a number from the user and 
         print whether that number is prime or not.
   Function Name: 
         check_prime
   Answer:
         Input: 31 - Output: Prime
         Input: 27 - Output: Not prime
*/
#include<stdio.h>
void check_prime(int n);
int main()
{
   int number;
   printf("Enter Number: ");
   scanf("%d",&number);
   check_prime(number);
}
void check_prime(int n)
{
    int is_prime = 1, divider = 2;
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
            printf("Prime");
    else    
            printf("Not Prime");
}
