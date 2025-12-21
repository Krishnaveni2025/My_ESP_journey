/* C LEVEL 05 Problem 09
  Question: Write a loop program to print sum of two digit numbers, who's one's digit is 5.
  Answer:
  495
  */
#include<stdio.h>
int main()
{
  int x;
  //your code here
  x  = 11;
  int sum = 0;
  for(;;)
    {
      //your code here
      loop:
      if(x<100)
      {
        if((x%10)==5)
        {
           sum = sum + x;
        }
        x++;
        goto loop;
      }
      break;
    }
  printf("%d",sum);
}

