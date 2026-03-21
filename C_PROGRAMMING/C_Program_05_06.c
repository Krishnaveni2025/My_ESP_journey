/* C LEVEL 05 Problem 06
        Use only int variables
        Use only Decimals
        Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
        Don't use Arrays, pointers, strings,etc.
   Question: 
        Write a loop program to print two digit odd numbers, below 20.
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
  int number;
  //your code here
  number  = 11;
  for(;;)
    {
      //your code here
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
