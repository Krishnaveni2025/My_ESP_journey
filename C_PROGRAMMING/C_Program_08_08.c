/* C LEVEL 08 Problem 08
        Use only int variables
        Use only Decimals
        Use Functions with a return value
        Do not use arrays, strings, pointers, etc.
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
int disp_interchange_first_last_digit(int n);
int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d",&number);
    printf("%d",disp_interchange_first_last_digit(number));
}
int disp_interchange_first_last_digit(int n)
{
    int last, first, multiplier = 1;
    first = n%10;
    last = n;
    while(last>9)
    {
        multiplier *= 10;
        last /= 10;
    }
    return ((first*multiplier)+(((n%multiplier)/10)*10)+last);
}
