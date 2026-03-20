/* C LEVEL 01 Program 12
        Use only int variables
        Use only Decimals
        Use the following operations only
        +,-,/,*,%
        Do not use any other operations
  Question: Write a program to get a three digit number from the user and print it's sum of digits
  Example: 
Input:562 Output:13
Input:469 Output:19
*/
#include<stdio.h>
int main()
{
  int x, y;
  //your code here
  printf("Enter a three digit number: ");
  scanf("%d",&x);
  y = ((x/10)%10)+(x/10)+(x%10);
  printf("Result = %d", y);
  return 0;
}
