/* C LEVEL 07 Problem 01
         Use only int variables
         Use only Decimals
         Use functions with not return value.
         Don't use Arrays, pointers, strings,etc.
Question: Write a loop program to print 1 to 5 on one by one
Function Name: disp_assend
Answer:
1
2
3
4
5
*/
#include<stdio.h>
void disp_assend(int);
int main()
{
int x;
x = 1;
disp_assend(x);
}
void disp_assend(int x)
{
//your code here
  for(x = 1; x<6; x++)
    {
      printf("%d\n",x);
    }
}
