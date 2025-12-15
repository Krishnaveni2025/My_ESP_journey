/* C LEVEL 01 Program 20
  Question: Get a three digit number from the user, make the ten's digit 0, then print it
  Example:
Input:695 Output:605
Input:182 Output:102
*/
#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter a three digit number: ");
  scanf("%d",&x);
  y = (x/100)*100+(x%10);
  printf("Result = %d",y);
  return 0;
}
