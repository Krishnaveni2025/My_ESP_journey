/* C LEVEL 05 Problem 01
        Use only int variables
        Use only Decimals
        Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
        Don't use Arrays, pointers, strings,etc.
   Question: 
        Write a loop program to print 1 to 5 on one by one.
   Answer: 
        1
        2
        3
        4
        5
  */
#include<stdio.h>
int main()
{
  int number;
  //your code here
  number  = 1;
  for(;;)
    {
      //your code here
      loop:
      if(number<6)
      {
        printf("%d\n",number);
        number++;
        goto loop;
      }
      break;
    }
}
