/* C LEVEL 03 Program 12
  Question: Get a two digit number from the user and check if the digit 1 is greater than equals to digit 0. If yes then print "Success", otherwise "Failure".
  Example:
  Input:66 Output:"Success"
  Input:67 Output:"Failure"
  Input:98 Output:"Success"
*/
#include<stdio.h>
int main()
{
  int x;
  printf("Enter a two digit number: ");
  scanf("%d",&x);
  //your code here
  if(((x/10)>=(x%10)))
  {
    printf("\"Success\"");
  }
  else
  {
    printf("\"Failure\"");
  }
}
