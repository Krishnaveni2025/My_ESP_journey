/* C LEVEL 07 Problem 27
  Question: Write a program to print the total count of numbers which are less than 100000 and whose sum of digits is 14
  Function Name: disp_count_sum14
  Answer:
  2710
  */

#include<stdio.h>
void disp_count_sum14(int);
int main()
{
int x;
x = 10;
disp_count_sum14(x);
}
void disp_count_sum14(int x)
{
//your code here
  int count = 0, sum = 0, num;
  while(x<100000)
    {
      num = x,sum = 0;
      while(num)
        {
          sum += (num%10);
          num /= 10;
        }
      if(sum==14)
      {
        count++;
      }
      x++;
    }
  printf("%d",count);
}
