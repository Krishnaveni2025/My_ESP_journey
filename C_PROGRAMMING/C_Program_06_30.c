/* C LEVEL 06 Problem 30
  Question: Write a program to get two numbers from the user and print the HCF of those numbers
  Answer:
  Input: 20 40  Output: 20
  Input: 15 78  Output: 3
  */
#include<stdio.h>
int main()
{
  int x;
  //your code here
  int y;
  printf("Enter two numbers: ");
  scanf("%d %d",&x,&y);
  while(1)
  {
 loop:
      if(x!=y)
      {
        if(x>y)
        {
        x -= y;
        }
        else
        {
        y-=x;
        }
        goto loop;
      }
      printf("%d",x);
      break;
    }
}
