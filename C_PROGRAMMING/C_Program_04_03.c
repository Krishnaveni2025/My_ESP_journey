/* C LEVEL 04 Program 03
  Question: Write a loop program to print sum of 1 to 5
  Answer:
  15
  */
#include<stdio.h>
int main()
{
  int x,y;
  //your code here
  x = 1;
  y = 0;
  loop:if(x<6)
  {
    y = x+y;
    x++;
    goto loop;
  }
  printf("Sum = %d",y);
  return 0;
}
