/*  
 C LEVEL 01 Program 08
          Use only int variables
          Use only Decimals
          Use the following operations only
          +,-,/,*,%
          Do not use any other operations
 Question: 
          Write a program to get a three digit number from the user and 
          print the one's digit
 Example: 
          Input:456 Output:6
          Input:569 Output:9
  */
#include<stdio.h>
int onesdigit(int n);
int main()
{
    int number;
    printf("Input(3digit): ");
    scanf("%d",&number);
    printf("Output: %d",onesdigit(number));
}
int onesdigit(int n)
{
    return n%10;
}
