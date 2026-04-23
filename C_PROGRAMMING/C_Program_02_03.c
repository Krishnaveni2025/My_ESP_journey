/* 
    C LEVEL 02 Program 03
            Use only int variables
            Use only Decimals
            Use the following operations only
            +, -, /, *, %, ==, !=, <, >, <=, >=
            Do not use if, for, while, arrays, pointers, strings, etc.
   Question: 
            Get a number from the user and 
            check if the number is less than 50. 
            If yes then print 1, 
            otherwise print 0
   Example: 
            Input: 45    Output:1
            Input: 56789 Output:0
*/
#include<stdio.h>
int islessthan50(int n);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    printf("Output: %d",islessthan50(number));
}
int islessthan50(int n)
{
    return n<50;
}
