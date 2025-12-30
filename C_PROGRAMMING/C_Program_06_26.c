/* C LEVEL 06 Problem 26
  Question: Write a program to print the biggest 4-digit number which is divisible by 7 and 9
  Answer:
  9954
  */
#include<stdio.h>
int main()
{
  int x;
  //your code here
  x = 1000;
   int big = 0;
  while(1)
    {
      //your code here
      loop:
      if(x<10000)
      {
        if((!(x%7))&&(!(x%9)))
        {
          big = x;
        }
        x++;
        goto loop;
      }
      printf("%d",big);
      break;
    }
}
