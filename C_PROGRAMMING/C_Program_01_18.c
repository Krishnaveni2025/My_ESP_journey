/* C LEVEL 01 Program 18
        Use only int variables
        Use only Decimals
        Use the following operations only
        +,-,/,*,%
        Do not use any other operations
  Question: Get a two - digit number from the user, make the ten's digit 1 and print the number
  Example:
Input:95 Output:15
Input:82 Output:12
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
