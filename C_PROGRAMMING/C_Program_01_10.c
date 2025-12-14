/* C LEVEL 01 Program 10
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
