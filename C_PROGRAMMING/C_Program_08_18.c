/* C LEVEL 08 Problem 18
  Question: Write a program to get ttwo numbers from the user and print the LCM of those numbers
  Function Name: disp_LCM2
  Answer:
  Input: 20 40 Output: 40
  Input: 15 78 Output:390
  */
#include<stdio.h>
int disp_LCM2(int, int);
int main()
{
int x,y,lcm;
scanf("%d %d",&x,&y);
lcm = disp_LCM2(x,y);
  printf("%d",lcm);
}
int disp_LCM2(int a, int b)
{
int lcm;
//your code here
  if(a>b)
  {
    lcm = a;
  }
    else
    {
      lcm = b;
    }
    while(1)
      {
        if(!(lcm%a))
        {
          if(!(lcm%b))
          {
            return (lcm);
            break;
          }
        }
        lcm++;
      }
  }

