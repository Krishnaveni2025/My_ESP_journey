/* C LEVEL 08 Problem 02
Question: Write a loop program to print sum of 6 to 1
Function Name: disp_rsum
Answer:
21
*/
#include<stdio.h>
int disp_rsum(int);
int main()
{
int x,y;
x = 6;
y = disp_rsum(x);
printf("%d",y);
}
int disp_rsum(int a)
{
int y = 0;
//your code here
  while(a>0)
    {
      y += a;
      a--;
    }
return (y);
}
