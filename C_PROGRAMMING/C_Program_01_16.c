/* 
    C LEVEL 01 Program 16
            Use only int variables
            Use only Decimals
            Use the following operations only
            +,-,/,*,%
            Do not use any other operations
   Question: 
            Get a four digit number from the user and 
            only reverse last two digits of the number (100's and 1000's)
            then print the number
   Example:
            Input:9561 Output:5961
            Input:3859 Output:8359
*/
#include<stdio.h>
void get4d_rev100s1000s(void);
int main()
{
    get4d_rev100s1000s();
}
void get4d_rev100s1000s(void)
{
  int number;
  //your code here
  printf("Enter a four digit number: ");
  scanf("%d",&number);
  printf("%d",((((number/100)%10)*1000)+((number/1000)*100)+(number%100)));    
}
