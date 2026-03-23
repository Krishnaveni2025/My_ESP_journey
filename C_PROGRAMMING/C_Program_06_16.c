/* C LEVEL 06 Problem 16
         Use only int variables
         Use only Decimals
         Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
         Don't use Arrays, pointers, strings,etc.
  Question: Write a program to get a number from the user and print whether that number is prime or not.
  Answer:
Input: 31 - Output: Prime
Input: 27 - Output: Not prime
*/
#include<stdio.h>
int main()
{
    int number, is_prime = 1, divider = 2;
    printf("Enter Number: ");
    scanf("%d",&number);
    while(1)
    {
        loop:
                if(divider<number)
                {
                    if(!(number%divider))
                    {
                        is_prime = 0;
                        break;
                    }
                    divider++;
                    goto loop;
                }
            break;
    }
    if(is_prime)
            printf("Prime");
    else
            printf("Not Prime");
    return 0;
}
