/* C LEVEL 01 Program 14
  Question: Write a program to get a number from the user and print the reverse of the number.
  Example:
Input:561 Output:165
Input:859 Output:958
*/
#include<stdio.h>
int main()
{
  int x,y;
  //your code here
  printf("Enter a three-digit number: ");
  scanf("%d",&x);
  y = ((x%10)*100)+(((x/10)%10)*10)+(x/100);
  printf("Result = %d", y);
  return 0;
}
