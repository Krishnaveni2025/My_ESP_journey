/* C LEVEL 02 Program 02
  Question: Get a number froom the user and check if the number is not equals to 50. If yes print 1, otherwise 0.
  Example:
  Input:50    Output:0
  Input:56789 Output:1
  */
#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter a number: ");
  scanf("%d",&x);
  //your code here
  y = x!=50;
  printf("Result = %d",y);
  return 0;
}
