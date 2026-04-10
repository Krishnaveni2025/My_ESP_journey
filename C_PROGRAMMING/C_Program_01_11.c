/* 
    C LEVEL 01 Program 11
            Use only int variables
            Use only Decimals
            Use the following operations only
            +,-,/,*,%
            Do not use any other operations
   Question: 
            Write a program to get a two digit number from the user and 
            print it's sum of digits
   Example:
            Input:56 Output:11
            Input:69 output:15
*/
#include<stdio.h>
void get2d_printsumd(void);
int main()
{
    get2d_printsumd();
}
void get2d_printsumd(void)
{
    int twodigitNumber;
    printf("Enter Two Digit Number: ");
    scanf("%d",&twodigitNumber);
    printf("Sum: %d",((twodigitNumber%10)+(twodigitNumber/10)));
}
