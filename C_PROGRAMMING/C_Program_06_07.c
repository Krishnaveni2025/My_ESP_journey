/*C LEVEL 06 Problem 07
  Question: Write a loop program to print two digit odd numbers whose sum of digits are 7
  Answer:
  25
  43
  61

*/
#include<stdio.h>
int main()
{
  int x;
  //your code here
  x= 11;
  while(1)
    {
      //your code here
     loop: 
     if(x<100)
     {
         if(x%2)
         {
             if(((x%10)+(x/10))==7)
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





