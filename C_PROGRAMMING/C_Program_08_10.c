/* C LEVEL 08 Problem 10
        Use only int variables
        Use only Decimals
        Use Functions with a return value
        Do not use arrays, strings, pointers, etc.
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
int check_prime(int n);
int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d",&number);
    if(check_prime(number))
            printf("Prime");
    else
            printf("Not Prime");
}
int check_prime(int n)
{
    int  divider = 2;
    while(divider<n)
        {
            if(!(n%divider))
                {
                    return 0;
                }
            divider++;
        }
    return 1;
}
