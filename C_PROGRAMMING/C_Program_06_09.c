/* C LEVEL 06 Problem 09
Question: write a loop program to print the sum of two digit numbers, who's 1's digits is 5
Answer:
495
  */

#include<stdio.h>
int main()
{
  int x;
  //your code here
  x= 10;
  int sum = 0;
  while(1)
    {
      //your code here
     loop: 
     if(x<100)
     {
         if((x%10)==5)
         {
             sum += x;
         }
         x++;
         goto loop;
     }
      printf("%d",sum);
     break;
      
    }
}

