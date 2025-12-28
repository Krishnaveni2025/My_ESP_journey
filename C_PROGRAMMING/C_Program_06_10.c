/* C LEVEL 06 Problem 10
Question: write a loop program to print the sum of two digit odd numbers, who's 10's digits is 7
Answer:
375
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
         if(x%2)
         {
           if((x/10)==7)
           {
             sum += x;
           }
         }
         x++;
         goto loop;
     }
      printf("%d",sum);
     break;
      
    }
}


