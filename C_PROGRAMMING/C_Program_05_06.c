/* C LEVEL 05 Problem 06
  Question: Write a loop program to print two digit odd numbers, below 20.
  */
#include<stdio.h>
int main()
{
  int x;
  //your code here
  x  = 11;
  for(;;)
    {
      //your code here
      loop:
      if(x<20)
      {
        if(x%2)
        {
         printf("%d\n",x);
        }
        x++;
        goto loop;
      }
      break;
    }  
}

