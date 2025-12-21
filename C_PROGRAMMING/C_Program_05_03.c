/* C LEVEL 05 Problem 03
  Question: Write a loop program to print sum of 1 to 5.
  */
#include<stdio.h>
int main()
{
  int x;
  //your code here
  x  = 5;
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

