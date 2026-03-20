/* C LEVEL 01 Program 11
        Use only int variables
        Use only Decimals
        Use the following operations only
        +,-,/,*,%
        Do not use any other operations
   Question: 
        Write a program to get a two digit number from the user and 
        print it's sum of digits
   Example:
        Input:56 Output:11
        Input:69 output:15
*/
#include<stdio.h>
int main()
{
  int number;
  //your code here
  printf("Enter a two - digit number: ");
  scanf("%d",&number);
  printf("Result = %d",((number%10)+(number/10)));
  return 0;
}
