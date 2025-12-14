/* C LEVEL 01 Program 18
  Question: Get a two - digit number from the user, make the ten's digit 1 and print the number
  Example:
Input: Output:
Input: Output:
*/
#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter a two digit number: ");
  scanf("%d",&x);
  y = 10*(x%10);
  printf("Result = %d",y);
  return 0;
}
