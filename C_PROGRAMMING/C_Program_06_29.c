/* C LEVEL 06 Problem 29
  Question: Write a program to get three numbers from the user and print the LCM of those numbers
  Answer:
  Input: 20 40 80 Output: 80
  Input: 15 78 63 Output: 8190
  */
#include<stdio.h>
int main()
{
  int x;
  //your code here
  int y,z;
  int max;
  printf("Enter a number: ");
  scanf("%d %d %d",&x,&y,&z);
  if((x>y)&&(x>z))
  {
    max = x;
  }
  else if((y>x)&&(y>z))
  {
    max = y;
  }
  else
  {
    max = z;
  }
  while(1)
    {
      //your code here
      loop:
      if((!(max%x))&&(!(max%y))&&(!(max%z)))
      {
        printf("%d",max);
        break;
      }
      max++;
      goto loop;
    }
}
