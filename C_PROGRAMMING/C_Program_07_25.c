/* C LEVEL 07 Problem 25
         Use only int variables
         Use only Decimals
         Use functions with not return value.
         Don't use Arrays, pointers, strings,etc.
   Question: 
         Write a program to get a number from the user and 
         print the total number of single digit prime numbers in the number
   Function Name: 
         disp_single_digit_prime
   Answer:
         Input: 163496481 Output: 1
         Input: 364925    Output: 3
  */

#include<stdio.h>
void disp_single_digit_prime(int n);
int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d",&number);
    disp_single_digit_prime(number);
}
void disp_single_digit_prime(int n)
{
    int prime_count = 0, is_prime = 1, divider = 2;
    while(n)
    {
        is_prime = 1;
        for(divider=2; divider<(n%10); divider++)
        {
            if(!((n%10)%divider))
            {
                is_prime = 0;
                break;
            }
        }
         if((n%10)<2)
                  is_prime = 0;
        if(is_prime)
                prime_count++;
        n/=10;
    }
    printf("%d",prime_count);
}
