/* C LEVEL 06 Problem 17
         Use only int variables
         Use only Decimals
         Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
         Don't use Arrays, pointers, strings,etc.
   Question: 
         Write a program to get a number from the user and 
         print whether that number is prime or not and 
         sum of the digits equal to 14.
   Answer:
         Input: 59 - Output: Prime & sum of the digits is 14
         Input: 77 - Output: Not prime but sum of digits is 14
         Input: 13 - Output: Prime & sum of digits is not 14
         Input: 27 - Output: Not prime & sum of digits is not 14
*/
#include<stdio.h>
int main()
{
    int number, is_prime = 1, divider = 2, sumofdigits = 0 , temp;
    printf("Enter Number: ");
    scanf("%d",&number);
    temp = number;
    while(1)
    {
        sloop:
            if(temp)
            {
                sumofdigits += temp%10;
                temp /= 10;
                goto sloop;
            }
            goto ploop;
        ploop:
            if(divider<number)
            {
                if(!(number%divider))
                {
                    is_prime = 0;
                    break;
                }
                divider++;
                goto ploop;
            }
        break;
    }
    if(is_prime)
    {
        if(sumofdigits==14)
                printf("Prime & sum of the digits is 14");
        else
                printf("Prime & sum of digits is not 14");
    }
    else
    {
        if(sumofdigits==14)
                printf("Not prime but sum of digits is 14");
        else
                printf("Not prime & sum of digits is not 14");
    }
    return 0;
}
