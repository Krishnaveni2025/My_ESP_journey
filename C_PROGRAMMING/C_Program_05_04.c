/* C LEVEL 05 Problem 04
    Use only int variables
    Use only Decimals
    Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
    Don't use Arrays, pointers, strings,etc.
  Question: Write a loop program to print sum of 6 to 1.
  */
#include<stdio.h>
int main()
{
  int x;
  //your code here
  x  = 6;
  int sum = 0;
  for(;;)
    {
      //your code here
      loop:
      if(x>0)
      {
        sum = sum + x;
        x--;
        goto loop;
      }
      break;
    }
    printf("%d",sum);
}

