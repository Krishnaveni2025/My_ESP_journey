/* C LEVEL 05 Problem 04
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

