/* C LEVEL 07 Problem 30
         Use only int variables
         Use only Decimals
         Use functions with not return value.
         Don't use Arrays, pointers, strings,etc.
   Question: 
         Write a program to get two numbers from the user and 
         print the HCF of those numbers
   Function Name: 
         disp_count_HCF2
   Answer:
         Input: 20 40  Output: 20
         Input: 15 78  Output: 3
  */

#include<stdio.h>
void disp_count_HCF2(int n1, int n2);
int main()
{
    int number1, number2;
    printf("Enter Number 1: ");
    scanf("%d",&number1);
    printf("Enter Number 2: ");
    scanf("%d",&number2);
    disp_count_HCF2(number1,number2);
    return 0;
}
void disp_count_HCF2(int n1, int n2)
{
    while(n2!=n1)
    {
        if(n1>n2)
        {
            n1 -= n2;
        }
        else
        {
            n2 -= n1;
        }
    }
    printf("%d",n1);
}
