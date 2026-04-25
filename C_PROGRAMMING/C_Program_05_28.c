/* 
   C LEVEL 05 Problem 28
            Use only int variables
            Use only Decimals
            Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            Write a program to get two numbers from the user and 
            print the LCM of those numbers
   Answer:
            Input: 20 40  Output: 40
            Input: 15 78  Output:390
*/
#include<stdio.h>
void print_lcm(int n1, int n2);
int main()
{
    int number1, number2;
    printf("Input: ");
    scanf("%d %d",&number1, &number2);
    print_lcm(number1, number2);
}
void print_lcm(int n1, int n2)
{
    int lcm;
    if(n1>n2)
            lcm = n1;
    else
            lcm = n2;
    for(;;)
    {
        if(!(lcm%n1))
        {
            if(!(lcm%n2))
            {
                break;
            }
        }
        lcm++;
    }
    printf("Output: %d",lcm);
}
