/* C LEVEL 08 Problem 19
  Question: Write a program to get three numbers from the user and print the LCM of those numbers
  Function Name: disp_LCM3
  Answer:
  Input: 20 40 80 Output: 80
  Input: 15 78 63 Output: 8190
  */

#include<stdio.h>
int disp_LCM3(int,int, int);
int main()
{
int x,y,z,lcm;
scanf("%d %d %d",&x,&y, &z);
lcm = disp_LCM3(x,y,z);
  printf("%d",lcm);
}
int disp_LCM3(int a, int b, int c)
{
int lcm;
//your code here
  if(a>b)
  {
    if(a>c)
    {
      lcm = a;
    }
  }
    else
    {
      if(b>c)
      {
        lcm = b;
      }
      else
      {
        lcm = c;
      }
    }
    while(1)
      {
        if(!(lcm%a))
        {
          if(!(lcm%b))
          {
            if(!(lcm%c))
            {
              return lcm;
              break;
            }
          }
        }
        lcm++;
      }
  }


