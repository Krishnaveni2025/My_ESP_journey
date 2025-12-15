/* C LEVEL 02 Program 11
  Question: Get a two digit number from the user and check if the digit 1 is less than or equal to digit 0. If yes then print 1, Otherwise print 0.
Example:
Input: 66    Output: 1
Input: 67    Output: 1
Input: 98    Output: 0
  */
#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter a two digit number: ");
  scanf("%d",&x);
  //your code here
  y = ((x/10)<=(x%10));
  printf("Result = %d",y);
  return 0;
}
