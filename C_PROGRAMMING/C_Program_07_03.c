/* C LEVEL 07 Problem 03
Question: Write a loop program to print sum from 1 to 5
Function Name: disp_sum
Answer:
15
*/
#include<stdio.h>
void disp_sum(int);
int main()
{
int x;
x = 1;
disp_sum(x);
}
void disp_sum(int x)
{
//your code here
  int sum = 0;
  for(x = 1; x<6; x++)
    {
      sum += x;
    }
  printf("%d",sum);
}
