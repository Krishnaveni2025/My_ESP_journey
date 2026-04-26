/* 
   C LEVEL 06 Problem 30
            Use only int variables
            Use only Decimals
            Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            Write a program to get two numbers from the user and 
            print the HCF of those numbers
   Answer:
            Input: 20 40  Output: 20
            Input: 15 78  Output: 3
*/
#include<stdio.h>
int hcf2(int n1, int n2);
int main()
{
    int number1, number2;
    printf("Input: ");
    scanf("%d %d",&number1, &number2);
    printf("Output: %d",hcf2(number1, number2));
    return 0;
}
int hcf2(int n1, int n2)
{
    while(1)
    {
        if(n1!=n2)
        {
            if(n1>n2)
                    n1-=n2;
            else    
                    n2-=n1;
        }
        else return n1;
    }
}
