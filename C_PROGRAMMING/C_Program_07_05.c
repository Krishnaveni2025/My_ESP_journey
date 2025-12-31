/* C LEVEL 07 Problem 05
Question: Write a loop program to print odd numbers between 1 and 9
Function Name: disp_odd
Answer:
1
3
5
7
9
*/
#include<stdio.h>
void disp_odd(int);
int main()
{
int x;
x = 1;
disp_odd(x);
}
void disp_odd(int x)
{
//your code here
  for(x = 1; x<10; x++)
    {
      if(x%2)
      {
        printf("%d\n",x);
      }
    }
}
