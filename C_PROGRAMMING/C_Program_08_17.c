/* C LEVEL 08 Problem 17
  Question: Write a program to print the total count of numbers which are less than 100000 and whose sum of digits is 14
  Function Name: disp_count_sum14
  Answer:
  2710
  */
#include<stdio.h>
int disp_count_sum14(int);
int main()
{
int x,y;
x = 10;
y = disp_count_sum14(x);
printf("%d",y);
}
int disp_count_sum14(int a)
{
int y, temp, count = 0;
//your code here
  while(a<100000)
    {
      temp = a, y = 0;
      while(temp)
        {
          y += (temp%10);
          temp /= 10;
        }
      if(y==14)
      {
        count++;
      }
        a++;
    }
return (count);
}
