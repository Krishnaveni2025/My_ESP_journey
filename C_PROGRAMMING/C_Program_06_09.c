/* C LEVEL 06 Problem 09
         Use only int variables
         Use only Decimals
         Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
         Don't use Arrays, pointers, strings,etc.
   Question: 
         write a loop program to print the sum of two digit numbers, who's 1's digits is 5
   Answer:
         495
  */

#include<stdio.h>
int main()
{
    int number = 15, sum = 0;
    while(1)
    {
        loop:
        if(number<100)
        {
            if((number%10)==5)
                    sum+= number;
            number++;
            goto loop;
        }
        break;
    }
    printf("Answer: %d",sum);
}
