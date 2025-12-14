/*    C LEVEL 01 Problem 06
Question: Get a two-digit number from the user ans print the ones digit
Example: Input: 45  Output: 5
         Input: 56  Output: 6
  */
#include<stdio.h>
int main()
{
  int x,y;
  scanf("%d",&x);
  y = x%10;
  printf("%d",y);
  return 0;
}
