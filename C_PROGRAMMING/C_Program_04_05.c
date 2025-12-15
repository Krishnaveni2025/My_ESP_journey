/* C LEVEL 04 Program 05
Question: Write a loop program to print odd number between 1 and 9
  Answer:
  1
  3 
  5
  7
  9
  */
#include<stdio.h>
int main()
{
  int x;
  //your code here
  x = 1;
  loop:if(x<10)
  {
    if(x%2){
    printf("%d\n",x);
  }
    x++;
    goto loop;
  }
  return 0;
}

