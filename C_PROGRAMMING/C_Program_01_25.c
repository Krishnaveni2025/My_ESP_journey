/* C LEVEL 01 Program 25
        Use only int variables
        Use only Decimals
        Use the following operations only
        +,-,/,*,%
        Do not use any other operations
   Question: 
        Get a three digit number from the user. 
        If the sum of the digits is less than 10, 
            print the same, 
        otherwise 
            add the digits of sum. 
        If the sum of the digits is less than 10 
            then print the sum, 
        otherwise 
            add the digits of the sum, 
        and print the sum.
   Note: The result of the sum should always be single digit only
   Example:
        Input:123 Output:6
        Input:149 Output:5(14,5)
        Input:991 Output:1(19;10;1)
*/
#include<stdio.h>
void get3d_printsum(void);
int main()
{
    get3d_printsum();
}
void get3d_printsum(void)
{
  int number;
  printf("Enter a three digit number: ");
  scanf("%d",&number);
  //your code here
  number = ((number/100)+(number%10)+((number/10)%10));
  number = (number/10 + number%10);
  number = (number/10 + number%10);
  printf("%d",number);
}
