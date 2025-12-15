/* C LEVEL 03 Program 08
  Question: Get a two digit number from the user and check if the digit 0 and digit 1 are not identical. If yes then print "Success", otherwise "Failure".
  Example:
  Input:56 Output:"Success"
  Input:55 Output:"Failure"
*/
#include<stdio.h>
int main()
{
  int x;
  printf("Enter a two digit number: ");
  scanf("%d",&x);
  //your code here
  if(((x/10)!=(x%10)))
  {
    printf("\"Success\"");
  }
  else
  {
    printf("\"Failure\"");
  }
}
