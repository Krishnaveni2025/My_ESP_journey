/* C LEVEL 08 Problem 13
        Use only int variables
        Use only Decimals
        Use Functions with a return value
        Do not use arrays, strings, pointers, etc.
   Question: 
        Write a program to get a number from the user and 
        print the total number of single digit perfect square numbers in the number
   Function Name:  
        disp_single_digit_square
  Answer:
        Input: 123456789 Output: 3
        Input: 987531    Output: 2
  */
#include<stdio.h>
int disp_single_digit_square(int n);
int main()
{
    int number;
    printf("Enter Number: ");
    scanf("%d",&number);
    printf("%d",disp_single_digit_square(number));
}
int disp_single_digit_square(int n)
{
    int count = 0;
    while(n)
    {
        for(int i = 1; i<4; i++)
        {
            if((n%10)==(i*i))
                    count++;
        }
        n /= 10;
    }
    return count;
}
