/* C LEVEL 01 Program 01
  Question: Get a number from thte user and check if the number is equals to 50. If yes then print 1, otherwise print 0.
Example:
Input:50    Output:1
Input:56789 Output:0
  */
#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter a number: ");
  scanf("%d",&x);
  //your code here
  y = x==50;
  printf("Result = %d",y);
  return 0;
}
