/* C LEVEL 06 Problem 27
  Question: Write a program to print the total count of numbers which are less than 100000 and whose sum of digits is 14
  Answer:
  2710
  */
#include<stdio.h>
int main()
{
  int x;
  //your code here
  int count = 0, num, sum = 0;
  x = 10;
  while(1)
    {
      //your code here
      loop:
      if(x<100000)
      {
        sum = 0;
        num = x;
        sloop:
        if(num)
        {
          sum += (num%10);
          num /= 10;
          goto sloop;
        }
        if(sum == 14)
        {
          count++;
        }
        x++;
        goto loop;
      }
      printf("%d",count);
      break;
    }
}
