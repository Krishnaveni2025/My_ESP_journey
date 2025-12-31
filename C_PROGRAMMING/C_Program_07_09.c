/* C LEVEL 07 Problem 09
Question: Write a loop program to print the sum of two digit numbers whose one's digit is 5
Function Name: disp_2digit_ones5
Answer:
495
*/
#include<stdio.h>
void disp_2digit_ones5(int);
int main()
{
int x;
x = 0;
disp_2digit_ones5(x);
}
void disp_2digit_ones5(int x)
{
//your code here
  int i;
  for(i = 15; i<96; i++)
    {
      if((i%10)==5)
      {
        x += i;
      }
    }
  printf("%d",x);
}
