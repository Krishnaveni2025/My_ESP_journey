/* C LEVEL 08 Problem 16
  Question: Write a program to print the biggest 4-digit number which is divisible by 7 and 9
  Function Name: disp_biggest_4digit_div7_9 
  Answer:
  9954
  */
#include<stdio.h>
int disp_biggest_4digit_div7_9(int);
int main()
{
int x,y;
x = 1000;
y = disp_biggest_4digit_div7_9(x);
  printf("%d",y);
}
int disp_biggest_4digit_div7_9(int a)
{
int y = 0;
//your code here
  while(a<10000)
    {
      if(!(a%7))
      {
        if(!(a%9))
        {
          y = a;
        }
      }
      a++;
    }
return (y);
}
