/* 
   C LEVEL 01 Program 21
            Use only int variables
            Use only Decimals
            Use the following operations only
            +,-,/,*,%
            Do not use any other operations
   Question: 
            Get a number from the user and 
            subtract 5 from that number 
            if the number is odd, 
            then print the result. 
            Do not use "if".
   Example:
            Input:695 Output:690
            Input:182 Output:182
*/
#include<stdio.h>
void getnum_sub5(void);
int main()
{
    getnum_sub5();
}
void getnum_sub5(void)
{
  int number;
  //your code here
  printf("Enter a number: ");
  scanf("%d",&number);
  printf("Result = %d",(number - 5*(number%2)));
}
