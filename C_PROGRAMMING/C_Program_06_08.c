/* C LEVEL 06 Problem 08
         Use only int variables
         Use only Decimals
         Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
         Don't use Arrays, pointers, strings,etc.
   Question: 
         write a loop program to print the two digit even numbers, 
         who's sum of digits are 6
   Answer:
         24
         42
         60
  */

#include<stdio.h>
int main()
{
    int number = 24;
    while(1)
    {
        loop:
            if(number<100)
            {
                if(!(number%2))
                {
                    if(( (number%10)+(number/10) )==6)
                            printf("%d\n",number);
                }
                number++;
                goto loop;
            }
        break;
    }
}
