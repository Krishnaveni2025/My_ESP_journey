/* 
    C LEVEL 01 Program 14
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
void get3d_printrev(void);
int main()
{
    get3d_printrev();
}
void get3d_printrev(void)
{
  int number;
  //your code here
  printf("Enter a three-digit number: ");
  scanf("%d",&number);
  printf("Result = %d", (((number%10)*100)+(((number/10)%10)*10)+(number/100)));    
}
