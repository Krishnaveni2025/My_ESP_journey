/* 
   C LEVEL 01 Program 24
            Use only int variables
            Use only Decimals
            Use the following operations only
            +,-,/,*,%
            Do not use any other operations
   Question: 
            Get a three digit number from the user and 
            subtract 5 from that number 
            if 1's digit number and 100's digit number are odd, 
            then print the result. 
            Do not use "if"
   Example:
            Input:795  Output:790
            Input:372  Output:372
*/
#include<stdio.h>
void get3d_sub5(void);
int main()
{
    get3d_sub5();
}
void get3d_sub5(void)
{
  int number;
  printf("Enter a three digit number: ");
  scanf("%d",&number);
  //your code here
  printf("Result = %d",(number - 5*( ((number/100)%2) * ((number%10)%2) )));
}
