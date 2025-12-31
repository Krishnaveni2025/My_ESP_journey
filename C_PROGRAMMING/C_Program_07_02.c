/* C LEVEL 07 Problem 02
Question: Write a loop program to print 5 to 1 on one by one
Function Name: disp_descend
Answer:
5
4
3
2
1
*/
#include<stdio.h>
void disp_descend(int);
int main()
{
int x;
x = 5;
disp_descend(x);
}
void disp_descend(int x)
{
//your code here
for(x = 5; x>0; x--)
  {
    printf("%d\n",x);
  }
}
