/* C LEVEL 03 Program 08
      Use int variables
      Use only Decimals
      Use "if/else" statements 
   Question: 
      Get a two digit number from the user and 
      check if the digit 0 and digit 1 are not identical. 
      If yes then print "Success", otherwise "Failure".
   Example:
      Input:56 Output:"Success"
      Input:55 Output:"Failure"
*/
#include<stdio.h>
int main()
{
  int number;
  printf("Enter a two digit number: ");
  scanf("%d",&number);
  //your code here
  if(((number/10)!=(number%10)))
  {
    printf("\"Success\"");
  }
  else
  {
    printf("\"Failure\"");
  }
}
