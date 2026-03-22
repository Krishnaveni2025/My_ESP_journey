/* C LEVEL 05 Problem 19
        Use only int variables
        Use only Decimals
        Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
        Don't use Arrays, pointers, strings,etc.
   Question: 
        Write a program to get a four digit number from the user and 
        print whether the middle two digits(10's & 100's) of that number is prime or not.
  Answer:
Input: 6359 - Output: Not Prime
Input: 3537 - Output: Prime
*/
#include<stdio.h>
int main()
{
    int number, is_prime = 1, i = 2;
    printf("Enter 4 - digit Number: ");
    scanf("%d",&number);
    number = (number / 10)%100;
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
