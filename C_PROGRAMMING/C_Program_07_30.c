/* C LEVEL 07 Problem 30
  Question: Write a program to get two numbers from the user and print the HCF of those numbers
  Function Name: disp_count_HCF2
  Answer:
  Input: 20 40  Output: 20
  Input: 15 78  Output: 3
  */

#include<stdio.h>
void disp_count_HCF2(int, int);
int main()
{
int x,y;
scanf("%d %d",&x, &y);
disp_count_HCF2(x,y);
}
void disp_count_HCF2(int x, int y)
{
//your code here
  while(x!=y)
    {
      if(x>y)
      {
        x -= y;
      }
      else
      {
        y -= x;
      }
    }
  printf("%d",x);
}
