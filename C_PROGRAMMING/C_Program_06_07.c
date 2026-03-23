/*C LEVEL 06 Problem 07
         Use only int variables
         Use only Decimals
         Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
         Don't use Arrays, pointers, strings,etc.
  Question: 
         Write a loop program to print to two digit odd numbers whose sum of digits are 7
  Answer:
         25
         43
         61

*/
#include<stdio.h>
int main()
{
    int number = 25;
    while(1)
    {
        loop:
                if(number<100)
                {
                    if(number%2)
                    {
                        if(((number%10)+(number/10))==7)
                                printf("%d\n",number);
                    }
                    number++;
                    goto loop;
                }
            break;
    }
}
