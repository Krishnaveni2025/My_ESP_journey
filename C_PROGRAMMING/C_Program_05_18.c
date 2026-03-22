/* C LEVEL 05 Problem 18
        Use only int variables
        Use only Decimals
        Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
        Don't use Arrays, pointers, strings,etc.
   Question: 
        Write a program to get a number from the user and 
        print whether the first two digits(1's & ten's) of that number is prime or not.
   Answer:
        Input: 359 - Output: Prime
        Input: 3577 - Output: Not prime
*/
#include<stdio.h>
int main()
{
    int number, is_prime = 1, i = 2;
    printf("Enter Number: ");
    scanf("%d",&number);
    number = number % 100;
    for(;;)
    {
        loop:
            if(i<number)
            {
                if(!(number%i))
                {
                    is_prime = 0;
                    break;
                }
                i++;
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
