/* C LEVEL 01 Program 07
  Question: Write a program to get a two - digit number from thte user ans print the ten's digit
  Example: Input:45   Output:4
           Input:56   Output:5
  */
#include<stdio.h>
int main()
{
  int x,y;
  scanf("%d",&x);
  y = x/10;
  printf("%d",y);
  return 0;
}
