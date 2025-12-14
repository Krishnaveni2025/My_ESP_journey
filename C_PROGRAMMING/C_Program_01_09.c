/* C LEVEL 01 Program 09
  Question: Write a program to get a three digit number from the user and print the hundred's digit of the number.
  Example:
  Input:456 Output:4
  Input:569 Output:5
  */
#include<stdio.h>
int main()
{
  int x,y;
  //your code here
  printf("Enter a three digit number: ");
  scanf("%d",&x);
  y = x/100;
  printf("%d",y);
  return 0;
}
