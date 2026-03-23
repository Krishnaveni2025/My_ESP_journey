/*C LEVEL 06 Problem 01
         Use only int variables
         Use only Decimals
         Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
         Don't use Arrays, pointers, strings,etc.
  Question: Write a loop program to print 1 to 5 on one by one
  Answer:
  1
  2
  3
  4
  5
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
     if(x<6)
      {
        printf("%d\n",x);
        x++;
        goto loop;
      }
      break;
    }
}
