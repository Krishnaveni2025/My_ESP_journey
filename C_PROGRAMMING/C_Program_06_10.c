/* C LEVEL 06 Problem 10
         Use only int variables
         Use only Decimals
         Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
         Don't use Arrays, pointers, strings,etc.
   Question: 
         write a loop program to print the sum of two digit odd numbers, who's 10's digits is 7
   Answer:
         375
  */

#include<stdio.h>
int main()
{
    int number = 70, sum = 0;
    while(1)
    {
        loop:
            if(number<80)
            {
               if(number%2)
               {
                   if((number/10)==7)
                            sum += number;
               }
               number++;
               goto loop;
            }
        break;
    }
    printf("Answer: %d",sum);
}
