/* C LEVEL 05 Problem 02
  Question: Write a loop program to print 5 to 1 on one by one.
  Answer: 
  5
  4
  3
  2
  1
  */
#include<stdio.h>
int main()
{
  int x;
  //your code here
  x  = 5;
  for(;;)
    {
      //your code here
      loop:
      if(x>0)
      {
        printf("%d\n",x);
        x--;
        goto loop;
      }
    }
}

