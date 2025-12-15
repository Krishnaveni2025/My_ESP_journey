/* C LEVEL 02 Program 09
  Question: Get a two digit number from the user and check if the digit 0 is less than digit 1. If yes then print 1, Otherwise print 0.
Example:
Input: 54    Output: 1
Input: 45    Output: 0
  */
#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter a two digit number: ");
  scanf("%d",&x);
  //your code here
  y = ((x%10)<(x/10));
  printf("Result = %d",y);
  return 0;
}
