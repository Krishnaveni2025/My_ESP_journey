/*C LEVEL 06 Problem 
         Use only int variables
         Use only Decimals
         Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
         Don't use Arrays, pointers, strings,etc.
  Question: Write a loop program to print to two digit odd numbers below 20
  Answer:
  11
  13
  15
  17
  19

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




