/* C LEVEL 03 Program 11
      Use int variables
      Use only Decimals
      Use "if/else" statements 
   Question: 
      Get a two digit number from the user and 
      check if the digit 1 is less than equals to digit 0. 
      If yes then print "Success", otherwise "Failure".
   Example:
      Input:66 Output:"Success"
      Input:67 Output:"Success"
      Input:98 Output:"Failure"
*/
#include<stdio.h>
int main()
{
  int number;
  printf("Enter a two digit number: ");
  scanf("%d",&number);
  //your code here
  if(((number/10)<=(number%10)))
  {
    printf("\"Success\"");
  }
  else
  {
    printf("\"Failure\"");
  }
}
