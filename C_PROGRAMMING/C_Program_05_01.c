/* C LEVEL 05 Problem 01
  Question: Write a loop program to print 1 to 5 on one by one.
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
  x  = 1;
  for(;;)
    {
      //your code here
      loop:
      if(x<6)
      {
        printf("%d\n",x);
        x++;
        goto loop;
      }
    }
}

