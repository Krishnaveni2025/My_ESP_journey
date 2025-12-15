/* C LEVEL 04 Program 01
  Question: Write a loop program to print 1 to 5 on one by one
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
  int x;
  //your code here
  x = 1;
  loop:if(x<6)
  {
    printf("%d\n",x);
    x++;
    goto loop;
  }
  return 0;
}
