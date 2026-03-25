/* C LEVEL 07 Problem 22
         Use only int variables
         Use only Decimals
         Use functions with not return value.
         Don't use Arrays, pointers, strings,etc.
   Question: 
         Write a program to get a number from the user and 
         print the total number of two-digit odd numbers in the number
   Function Name: 
         disp_total_2digit_odd
   Answer:
         Input: 12345678 Output: 3
         Input: 987531   Output: 4
  */
#include<stdio.h>
void disp_total_2digit_odd(int n);
int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d",&number);
    disp_total_2digit_odd(number);
}
void disp_total_2digit_odd(int n)
{
    int odd2_count = 0;
    while(n>9)
    {
        if((n%100)%2)
        {
            odd2_count++;
        }
        n /= 10;
    }
    printf("%d",odd2_count);
}
