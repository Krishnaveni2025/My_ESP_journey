/* 
  C LEVEL 07 Problem 28
                    Use only int variables
                    Use only Decimals
                    Use functions with not return value.
                    Don't use Arrays, pointers, strings,etc.
  Question: 
                    Write a program to get two numbers from the user and 
                    print the LCM of those numbers
  Function Name: 
                    disp_LCM2
  Answer:
                    Input: 20 40 Output: 40
                    Input: 15 78 Output: 390
*/
#include<stdio.h>
void disp_LCM2(int n1, int n2);
int main()
{
    int number1, number2;
    printf("Input: ");
    scanf("%d %d",&number1, &number2);
    disp_LCM2(number1, number2);
    return 0;
}
void disp_LCM2(int n1, int n2)
{
    int lcm;
    if(n1>n2)   lcm = n1;
    else        lcm = n2;
    while(1)
    {
        if(!(lcm%n1))
        {
            if(!(lcm%n2))
                    break;
        }
        lcm++;
    }
    printf("Output: %d",lcm);
}
