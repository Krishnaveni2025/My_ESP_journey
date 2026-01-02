/* C LEVEL 08 Problem 03
Question: Write a loop program to print the sum of two digit numbers whose one's digits is 5
Function Name: disp_2digit_ones5
Answer:
495
*/
#include<stdio.h>
int disp_2digit_ones5(int);
int main()
{
int x,y;
x = 15;
y = disp_2digit_ones5(x);
  printf("%d",y);
}
int disp_2digit_ones5(int a)
{
int y = 0;
//your code here
  while(a<100)
    {
      if((a%10)==5)
      {
        y += a;
      }
      a++;
    }
return (y);
}
