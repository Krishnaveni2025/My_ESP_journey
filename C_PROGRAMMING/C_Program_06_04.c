/*C LEVEL 06 Problem 04
  Question: Write a loop program to print sum from 6 to 1
  Answer:
  21

*/
#include<stdio.h>
int main()
{
  int x;
  //your code here
  x= 6;
  int sum = 0;
  while(1)
    {
      //your code here
     loop: if(x>0)
      {
        sum += x;
        x--;
        goto loop;
      }
      printf("%d",sum);
      break;
    }
}


