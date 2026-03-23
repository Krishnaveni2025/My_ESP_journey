/* C LEVEL 06 Problem 28
         Use only int variables
         Use only Decimals
         Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
         Don't use Arrays, pointers, strings,etc.
  Question: Write a program to get ttwo numbers from the user and print the LCM of those numbers
  Answer:
  Input: 20 40 Output: 40
  Input: 15 78 Output:390
  */
#include<stdio.h>
int main()
{
  int x;
  //your code here
  int y;
  printf("Enter two numbers: ");
  scanf("%d %d",&x,&y);
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
      //your code here
      loop:
      if(((max%x)==0)&&((max%y)==0))
      {
        printf("%d",max);
        break;
      }
      max++;
      goto loop;
    }
}
