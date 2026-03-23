/*C LEVEL 06 Problem 
         Use only int variables
         Use only Decimals
         Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
         Don't use Arrays, pointers, strings,etc.
  Question: 
         Write a loop program to print to two digit odd numbers below 20
  Answer:
         11
         13
         15
         17
         19

*/
#include<stdio.h>
int main()
{
    int number = 11;
    while(1)
    {
        loop:
                if(number<20)
                {
                    if(number%2)
                    {
                        printf("%d\n",number);
                    }
                    number++;
                    goto loop;
                }
        break;
    }
}
