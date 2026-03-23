/*C LEVEL 06 Problem 05
         Use only int variables
         Use only Decimals
         Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
         Don't use Arrays, pointers, strings,etc.
  Question: Write a loop program to print to odd numbers between 1 and 9
  Answer:
  1
  3
  5
  7
  9

*/
#include<stdio.h>
int main()
{
  int x;
  //your code here
  x= 1;
  while(1)
    {
      //your code here
     loop: 
     if(x<10)
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



