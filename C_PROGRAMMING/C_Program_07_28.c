/* C LEVEL 07 Problem 28
  Question: Write a program to get ttwo numbers from the user and print the LCM of those numbers
  Function Name: disp_LCM2
  Answer:
  Input: 20 40 Output: 40
  Input: 15 78 Output:390
  */
#include<stdio.h>
void disp_LCM2(int,int);
int main()
{
int x,y;
scanf("%d %d",&x, &y);
disp_LCM2(x,y);
}
void disp_LCM2(int x, int y)
{
//your code here
  int max;
  if(x>y)
  {
    max = x;
  }
  else
  {
    max = y;
  }
  while(1)
  {
      if(!(max%x))
      {
          if(!(max%y))
          {
              printf("%d",max);
              break;
          }
      }
      max++;
  }
}
