/*  C LEVEL 01 Program 08
  Question: Write a program to get a three digit number from the user and print the one's digit
  Example: Input:456 Output:6
           Input:569 Output:9
  */
#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter a three digit number: ");
  scanf("%d",&x);
  y = x%10;
  printf("%d",y);
  return 0;
}
