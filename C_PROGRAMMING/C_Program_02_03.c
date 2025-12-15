/* C LEVEL 02 Program 03
Question: Get a number from the user and chceck if the number is less than 50. If yes then print 1, otherwise print 0
Example: 
Input: 45    Output:1
Input: 56789 Output:0
*/
#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter a number: ");
  scanf("%d",&x);
  //your code here
  y = x<50;
  printf("Result = %d",y);
  return 0;
}
