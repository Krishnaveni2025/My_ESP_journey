/* C LEVEL 02 Program 13
  Question: Get a three digit number from the user and check if the digit 0 and digit 1 are same and if digit 1 and 2 are different. If yes then print 1, Otherwise print 0.
Example:
Input: 988    Output: 1
Input: 567    Output: 0
  */
#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter a three digit number: ");
  scanf("%d",&x);
  //your code here
  y = (((x%10)==((x/10)%10))&((x/100)!=((x/10)%10)));
  printf("Result = %d",y);
  return 0;
}
