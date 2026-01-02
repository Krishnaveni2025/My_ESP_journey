/* C LEVEL 08 Problem 01
Question: Weite a loop program to print sum of 1 to 5
Function Name: disp_sum
Answer:
15
*/
#include<stdio.h>
int disp_sum(int);
int main()
{
int x,y;
x = 1;
y = disp_sum(x);
printf("%d",y);
}
int disp_sum(int a)
{
int y = 0;
//your code here
  while(a<6)
    {
      y += a;
      a++;
    }
return (y);
}
