/* C LEVEL 02 Program 14
  Question: Get a four digit number from the user and check if first two digits and last two digits are same. If yes then print 1, Otherwise print 0.
Example:
Input: 1919    Output: 1
Input: 6567    Output: 0
  */
#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter a four digit number: ");
  scanf("%d",&x);
  //your code here
  y = ((x/100)==(x%100));
  printf("Result = %d",y);
  return 0;
}
