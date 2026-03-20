/* C LEVEL 01 Program 12
        Use only int variables
        Use only Decimals
        Use the following operations only
        +,-,/,*,%
        Do not use any other operations
   Question: 
        Write a program to get a three digit number from the user and 
        print it's sum of digits
   Example: 
        Input:562 Output:13
        Input:469 Output:19
*/
#include<stdio.h>
int main()
{
  int number;
  //your code here
  printf("Enter a three digit number: ");
  scanf("%d",&number);
  printf("Result = %d",((number%10)+(number/100)+((number/10)%10)));
  return 0;
}
