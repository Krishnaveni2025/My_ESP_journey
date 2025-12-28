/*C LEVEL 06 Problem 03
  Question: Write a loop program to print sum from 1 to 5
  Answer:
  15

*/
#include<stdio.h>
int main()
{
  int x;
  //your code here
  x= 1;
  int sum = 0;
  while(1)
    {
      //your code here
     loop: if(x<6)
      {
        sum += x;
        x++;
        goto loop;
      }
      printf("%d",sum);
      break;
    }
}


