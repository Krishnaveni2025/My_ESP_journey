/* C LEVEL 01 Program 17
Question: Get a two digit number from the user, make the one's digit 0 then print it.
Example:
Input:95 Output:90
Input:18 Output:10
*/
#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter a two digit number: ");
  scanf("%d",&x);
  y = (x/10)*10;
  printf("Result = %d",y);
  return 0;
}
