/* C LEVEL 04 Program 09
Question: Write a loop program to print two digit even numbers whose sum of digits are 6
Answer:
24
42
60
  */
#include<stdio.h>
int main()
{
  int x;
  //your code here
  x = 11;
  loop:if(x<100)
  {
    if(!(x%2)){
    if((x%10)+(x/10)==6)
    {
      printf("%d\n",x);
    }
  }
    x++;
    goto loop;
  }
  return 0;
}


