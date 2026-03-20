/* C LEVEL 01 Program 20
        Use only int variables
        Use only Decimals
        Use the following operations only
        +,-,/,*,%
        Do not use any other operations
   Question: 
        Get a three digit number from the user, 
        make the ten's digit 0, then print it
   Example:
        Input:695 Output:605
        Input:182 Output:102
*/
#include<stdio.h>
int main()
{
  int number;
  printf("Enter a three digit number: ");
  scanf("%d",&number);
  printf("Result = %d",(((number/100)*100)+(number%10)));
  return 0;
}
