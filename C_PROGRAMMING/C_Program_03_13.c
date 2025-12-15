/* C LEVEL 03 Program 13
  Question: Get a three digit number from the user and check if the digit 1 and digit 0 are identical and digit 1 and digit 2 are different . If yes then print "Success", otherwise "Failure".
  Example:
  Input:988 Output:"Success"
  Input:567 Output:"Failure"
*/
#include<stdio.h>
int main()
{
  int x;
  printf("Enter a three digit number: ");
  scanf("%d",&x);
  //your code here
  if((((x/10)%10)==(x%10))&(((x/10)%10)!=(x/100)))
  {
    printf("\"Success\"");
  }
  else
  {
    printf("\"Failure\"");
  }
}
