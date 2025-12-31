/* C LEVEL 07 Problem 04
Question: Write loop program to print sum from 6 to 1 
Function Name: disp_rsum
Answer:
21
*/
#include<stdio.h>
void disp_rsum(int);
int main()
{
int x;
x = 6;
disp_rsum(x);
}
void disp_rsum(int x)
{
//your code here
  int sum = 0;
  for(x = 6; x>0; x--)
    {
      sum += x;
    }
  printf("%d",sum);
}
