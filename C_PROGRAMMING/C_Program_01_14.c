/* C LEVEL 01 Program 14
        Use only int variables
        Use only Decimals
        Use the following operations only
        +,-,/,*,%
        Do not use any other operations
   Question: 
        Write a program to get a number from the user and 
        print the reverse of the number.
   Example:
        Input:561 Output:165
        Input:859 Output:958
*/
#include<stdio.h>
int main()
{
  int number;
  //your code here
  printf("Enter a three-digit number: ");
  scanf("%d",&number);
  printf("Result = %d", (((number%10)*100)+(((number/10)%10)*10)+(number/100)));
  return 0;
}
