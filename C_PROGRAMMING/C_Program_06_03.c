/*C LEVEL 06 Problem 03
         Use only int variables
         Use only Decimals
         Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
         Don't use Arrays, pointers, strings,etc.
  Question: Write a loop program to print sum from 1 to 5
  Answer:
  15
*/
#include<stdio.h>
int main()
{
    int number = 1, sum = 0;
    while(1)
    {
        loop:
        if(number<6)
        {
            sum += number;
            number++;
            goto loop;
        }
        break;
    }
    printf("Answer: %d",sum);
}
