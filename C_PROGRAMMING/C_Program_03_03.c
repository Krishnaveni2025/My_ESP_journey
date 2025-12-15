/* C LEVEL 03 Program 03
  Question: Get a number from the user and check if the number is less than 50. If yes then print "Success", otherwise print "Failure".
Example:
Input:56789    Output: Failure
Input:45       Output: Success
*/
#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter a number: ");
  scanf("%d",&x);
  //your code here
  if(x<50)
  {
    printf("Success");
  }
  else
  {
    printf("Failure");
  }
  return 0;
}
