/* 
   C LEVEL 08 Problem 15
                    Use only int variables
                    Use only Decimals
                    Use Functions with a return value
                    Do not use arrays, strings, pointers, etc.
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
int disp_single_digit_prime(int n);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    printf("Output: %d",disp_single_digit_prime(number));
    return 0;
}
int disp_single_digit_prime(int n)
{
    int count = 0, is_prime, i;
    while(n>1)
    {
        is_prime = 1;
        for(i = 2; i<(n%10); i++)
        {
            if(!((n%10)%i))
            {
                is_prime = 0;
                break;
            }
        }
        if((n%10)==1)
                is_prime = 0;
        if(is_prime)
                count++;
        n /= 10;
    }
    return count;
}
