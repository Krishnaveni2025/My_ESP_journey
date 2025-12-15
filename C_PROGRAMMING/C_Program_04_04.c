/* C LEVEL 04 Program 04
  Question: Write a loop program to print sum of 6 to 1
  Answer:
  21
  */
#include<stdio.h>
int main()
{
  int x,y;
  //your code here
  x = 6;
  y = 0;
  loop:if(x>=0)
  {
    y = x+y;
    x--;
    goto loop;
  }
  printf("Sum = %d",y);
  return 0;
}

