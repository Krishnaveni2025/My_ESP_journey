/* C LEVEL 08 Problem 20
        Use only int variables
        Use only Decimals
        Use Functions with a return value
        Do not use arrays, strings, pointers, etc.
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
int disp_count_HCF2(int n1, int n2);
int main()
{
    int number1, number2;
    printf("Enter Number: ");
    scanf("%d",&number1);
    printf("Enter Number: ");
    scanf("%d",&number2);
    printf("%d",disp_count_HCF2(number1,number2));
}
int disp_count_HCF2(int n1, int n2)
{
    while(n1!=n2)
    {
        if(n1>n2)
                n1 -= n2;
        else
                n2 -= n1;
    }
    return n1;
}
