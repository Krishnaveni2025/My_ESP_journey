/* 
    C LEVEL 01 Program 12
            Use only int variables
            Use only Decimals
            Use the following operations only
            +,-,/,*,%
            Do not use any other operations
   Question: 
            Write a program to get a three digit number from the user and 
            print it's sum of digits
   Example: 
            Input:562 Output:13
            Input:469 Output:19
*/
#include<stdio.h>
void get3d_printsum(void);
int main()
{
    get3d_printsum();
}
void get3d_printsum(void)
{
    int threedNumber;
    printf("Enter Three Digit Number: ");
    scanf("%d",&threedNumber);
    printf("Sum : %d",(threedNumber/100)+((threedNumber%100)/10)+(threedNumber%10));
}
