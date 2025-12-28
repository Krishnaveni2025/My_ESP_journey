/* C LEVEL 06 Problem 08
Question: write a loop program to print the two digit even numbers, who's sum of digits are 6
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
  x= 10;
  while(1)
    {
      //your code here
     loop: 
     if(x<100)
     {
         if(!(x%2))
         {
             if(((x%10)+(x/10))==6)
             {
               printf("%d\n",x);
             }
         }
         x++;
         goto loop;
     }
     break;
      
    }
}
