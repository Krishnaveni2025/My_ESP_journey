/* C LEVEL 07 Problem 06
Question: Write a loop program to print two digit odd numbers, below 20
Function Name: disp_2digit_odd_below20
Answer:
11
13
15
17
19
*/
#include<stdio.h>
void disp_2digit_odd_below20(int);
int main()
{
int x;
x = 11;
disp_2digit_odd_below20(x);
}
void disp_2digit_odd_below20(int x)
{
//your code here
  for(x = 11; x<20; x++)
    {
      if(x%2)
      {
        printf("%d\n",x);
      }
    }
}
