/* C LEVEL 05 Problem 29
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
  int y,z,max;
  printf("Enter three numbers: ");
  scanf("%d %d %d",&x,&y,&z);
  if((x>y)&&(x>z))
      {
        max = x;
      }
  if((z>y)&&(z>x))
      {
        max = z;
      }
  else
      {
        max = y;
      }
  
  for(;;)
    {
      //your code here
      loop:
      if(((max%x)==0)&&((max%y)==0)&&((max%z)==0))
      {
        printf("%d",max);
        break;
      }
      ++max;
      goto loop;
    }
}
