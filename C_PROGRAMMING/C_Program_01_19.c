/* C LEVEL 01 Program 19
        Use only int variables
        Use only Decimals
        Use the following operations only
        +,-,/,*,%
        Do not use any other operations
   Question: 
        Get a three digit number from the user, 
        make the one's digit 2 and then print it
   Example:
        Input:695 Output:692
        Input:181 Output:182
*/
#include<stdio.h>
int main()
{
  int number;
  printf("Enter a three digit number: ");
  scanf("%d",&number);
  printf("Result = %d",((number/10)*10)+2);
  return 0;
}
