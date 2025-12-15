/* C LEVEL 04 Program 06
Question: Write a loop program to print two digit odd numbers below 20
  */
#include<stdio.h>
int main()
{
  int x;
  //your code here
  x = 1;
  loop:if(x<20)
  {
    if(x%2){
    printf("%d\n",x);
  }
    x++;
    goto loop;
  }
  return 0;
}


