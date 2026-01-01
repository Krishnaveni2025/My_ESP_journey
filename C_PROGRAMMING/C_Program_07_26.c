/* C LEVEL 07 Problem 26
  Question: Write a program to print the biggest 4-digit number which is divisible by 7 and 9
  Function Name: disp_biggest_4digit_div7_9 
  Answer:
  9954
  */
#include<stdio.h>
void disp_biggest_4digit_div7_9(int);
int main()
{
int x;
x = 1000;
disp_biggest_4digit_div7_9(x);
}
void disp_biggest_4digit_div7_9(int x)
{
//your code here
  int big = 0;
  while(x<10000)
    {
      if(!(x%7))
      {
        if(!(x%9))
        {
          big = x;
        }
      }
      x++;
    }
  printf("%d",big);
}
