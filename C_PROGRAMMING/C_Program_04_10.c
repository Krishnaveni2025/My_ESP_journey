/* C LEVEL 04 Program 10
Question: Write a loop program to print sum of two digit odd numbers whose ten's digit is 7
Answer:
375
  */
#include<stdio.h>
int main()
{
  int x;
  //your code here
  x = 11;
  int y = 0;
  loop:if(x<100)
  {
    if(x%2){
    if((x/10)==7)
    {
      y = y+x;
    }
  }
    x++;
    goto loop;
  }
  printf("Sum = %d\n",y);
  return 0;
}


