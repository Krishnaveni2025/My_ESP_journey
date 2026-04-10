/* 
  C LEVEL 01 Program 18
            Use only int variables
            Use only Decimals
            Use the following operations only
            +,-,/,*,%
            Do not use any other operations
  Question: 
            Get a two - digit number from the user, 
            make the ten's digit 1 and 
            print the number
  Example:
            Input:95 Output:15
            Input:82 Output:12
*/
#include<stdio.h>
void get2d_make10s1(void);
int main()
{
    get2d_make10s1();
}
void get2d_make10s1(void)
{
  int number;
  printf("Enter a two digit number: ");
  scanf("%d",&number);
  printf("Result = %d",10+(number%10));
}
