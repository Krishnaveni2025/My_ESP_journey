/* C LEVEL 05 Problem 27
  Question: Write a program to print the total count of numbers which are less than 100000 and whose sum of digits is 14
  Answer:
  2710
  */
#include<stdio.h>
int main()
{
  int x;
  //your code here
  x = 59;
  int sum = 0, count = 0;
  for(;;)
    {
      //your code here
      loop:
      if(x<100000)
      {
        int num = x;
        sum = 0;
        sloop:
        if(num!=0)
        {
          sum += (num%10);
          num = num/10;
          goto sloop;
        }
        if(sum == 14)
        {
          count++;
        }
        x++;
        goto loop;
      }
      break;
    }
    printf("%d",count);
}
