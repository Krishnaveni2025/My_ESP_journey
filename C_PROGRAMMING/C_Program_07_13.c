/* C LEVEL 07 Problem 13
         Use only int variables
         Use only Decimals
         Use functions with not return value.
         Don't use Arrays, pointers, strings,etc.
   Question: 
         Write a program to get a number from the user print the reverse of the number.
   Function Name: 
         disp_reverse_number
   Answer:
         Input:123456   Output:654321
         Input:76895439 Output:93453867
         Input:675      Output:576
  */
#include<stdio.h>
void disp_reverse_number(int n);
int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d",&number);
    disp_reverse_number(number);
}
void disp_reverse_number(int n)
{
    int reverse = 0;
    while(n)
    {
        reverse = (reverse*10) + (n%10);
        n /= 10;
    }
    printf("%d",reverse);
}
