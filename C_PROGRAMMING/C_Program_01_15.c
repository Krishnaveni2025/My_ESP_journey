/* C LEVEL 01 Program 15
        Use only int variables
        Use only Decimals
        Use the following operations only
        +,-,/,*,%
        Do not use any other operations
   Question: 
        Write a program to get a four digit number from the user and 
        only reverse the first two digits of the number (10's and 1's) then print the number
   Example:
        Input:9561 Output:9516
        Input:3859 Output:3895
*/
#include<stdio.h>
int main()
{
  int number;
  //your code here
  printf("Enter a four digit number: ");
  scanf("%d",&number);
  printf("Result = %d",(((number/100)*100)+(((number%10)*10))+((number/10)%10)));
  return 0;
}
