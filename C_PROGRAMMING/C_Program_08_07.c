/* C LEVEL 08 Problem 07
        Use only int variables
        Use only Decimals
        Use Functions with a return value
        Do not use arrays, strings, pointers, etc.
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
int disp_reverse_number(int n);
int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d",&number);
    printf("%d",disp_reverse_number(number));
}
int disp_reverse_number(int n)
{
    int reverse = 0;
    while(n)
    {
        reverse = (reverse*10)+(n%10);
        n /= 10;
    }
    return reverse;
}
