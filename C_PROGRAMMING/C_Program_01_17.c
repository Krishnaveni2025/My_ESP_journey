/* C LEVEL 01 Program 17
        Use only int variables
        Use only Decimals
        Use the following operations only
        +,-,/,*,%
        Do not use any other operations
   Question: 
        Get a two digit number from the user, 
        make the one's digit 0 then print it.
   Example:
        Input:95 Output:90
        Input:18 Output:10
*/
#include<stdio.h>
int main()
{
  int number;
  printf("Enter a two digit number: ");
  scanf("%d",&number);
  printf("Result = %d",(number/10)*10);
  return 0;
}
