/* 
   C LEVEL 07 Problem 25
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
void disp_single_digit_prime(int a);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    disp_single_digit_prime(number);
    return 0;
}
void disp_single_digit_prime(int a)
{
    int count = 0, is_prime, i;
    while(a>1)
    {
        for(i = 2; i<(a%10); i++)
        {
            is_prime = 1;
            if(!((a%10)%i))
            {
                is_prime = 0;
                break;
            }
        }
        if((a%10)<2)
                is_prime = 0;
        if(is_prime)
                count++;
        a /= 10;
    }
    printf("Output: %d",count);
}
