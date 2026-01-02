/* C LEVEL 07 Problem 29
  Question: Write a program to get three numbers from the user and print the LCM of those numbers
  Function Name: disp_LCM3
  Answer:
  Input: 20 40 80 Output: 80
  Input: 15 78 63 Output: 8190
  */
#include<stdio.h>
void disp_LCM3(int, int, int);
int main()
{
int x,y,z;
scanf("%d %d %d",&x, &y, &z);
disp_LCM3(x,y,z);
}
void disp_LCM3(int x, int y, int z)
{
//your code here
  int max = 0;
  if(x>y)
  {
    if(x>z)
    {
      max = x;
    }
  }
  else
  {
    if(y>z)
    {
      max = y;
    }
    else
    {
      max = z;
    }
  }
  while(1)
  {
      if(!(max%x))
      {
          if(!(max%y))
          {
              if(!(max%z))
              {
                printf("%d",max);
                break;
              }
          }
      }
      max++;
  }
}

