/* C LEVEL 01 Program 10
        Use only int variables
        Use only Decimals
        Use the following operations only
        +,-,/,*,%
        Do not use any other operations
  Question: Write a c program to get a three digit number from the user and print the ten's digit
  Example:
Input:456 Output:5
Input:569 Output:6
*/
#include<stdio.h>
int main()
{
  int x,y;
  //your code here
  printf("Enter a three digit number: ");
  scanf("%d",&x);
  y = (x/10)%10;
  printf("Result = %d",y);
  return 0;
}
