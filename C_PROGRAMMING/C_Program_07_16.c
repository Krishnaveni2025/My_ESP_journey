/* 
   C LEVEL 07 Problem 16
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
void check_prime(int a);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    check_prime(number);
}
void check_prime(int a)
{
    int is_prime = 1, i;
    for(i = 2; i<a; i++)
    {
        if(!(a%i))
        {
            is_prime = 0;
            break;
        }
    }
    if(is_prime)
            printf("Output: Prime");
    else
            printf("Output: Not Prime");
}
