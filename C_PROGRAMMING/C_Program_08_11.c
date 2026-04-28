/* 
   C LEVEL 08 Problem 11
                    Use only int variables
                    Use only Decimals
                    Use Functions with a return value
                    Do not use arrays, strings, pointers, etc.
   Question: 
                    Write a program to get a number from the user and 
                    print the total number of digits which are odd in that number
   Function Name: 
                    disp_total_odd_digits
   Answer:
                    Input: 12345678 Output: 4
                    Input: 987531   Output:5
*/
#include<stdio.h>
int disp_total_odd_digits(int n);
int main()
{
    int number;
    printf("Input: ");
    scanf("%d",&number);
    printf("Output: %d",disp_total_odd_digits(number));
    return 0;
}
int disp_total_odd_digits(int n)
{
    int count = 0;
    while(n)
    {
        if((n%10)%2)
                count++;
        n /= 10;
    }
    return count;
}
