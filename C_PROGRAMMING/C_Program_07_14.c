/* 
   C LEVEL 07 Problem 14
                  Use only int variables
                  Use only Decimals
                  Use functions with not return value.
                  Don't use Arrays, pointers, strings,etc.
   Question: 
                  Write a program to get a number from the user and 
                  interchange the first and last digits and print the result 
   Function Name: 
                  disp_interchange_first_last_digit
   Answer:
                  Input:123456   Output:623451
                  Input:76895439 Output:96895437
                  Input:675      Output:576
  */
#include<stdio.h>
void disp_interchange_first_last_digit(int n);
int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d",&number);
    disp_interchange_first_last_digit(number);
}
void disp_interchange_first_last_digit(int n)
{
    int result, num, last, first, middle,multiplier = 1;
    first = n%10;
    num = n;
    while(num>9)
    {
        multiplier *= 10;
        num /= 10;
    }
    last = num;
    middle = (n%multiplier)/10;
    result = (first*multiplier)+(middle*10)+last;
    printf("%d",result);
}
