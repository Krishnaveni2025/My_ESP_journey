/* C LEVEL 01 Program 23
        Use only int variables
        Use only Decimals
        Use the following operations only
        +,-,/,*,%
        Do not use any other operations
   Question: 
        Get a two digit number from the user and 
        subtract 5 from that number, 
        if the sum of the digits of the number is odd, t
        hen print the result.
   Example:
        Input:95 Output:95
        Input:72 Output:67
*/
#include<stdio.h>
int main()
{
  int number;
  printf("Eneter a two - digit number: ");
  scanf("%d",&number);
  //your code here
  printf("Result = %d",(number - 5*( ((number%10)+(number/10))%2 )));
}
