/* C LEVEL 01 Program 19
Question: Get a three digit number from the user, make the one's digit 2 and then print it
Example:
Input:695 Output:692
Input:181 Output:182
*/
#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter a three digit number: ");
  scanf("%d",&x);
  y = (x/10)*10+2;
  printf("Result = %d",y);
  return 0;
}
