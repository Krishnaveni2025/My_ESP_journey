/* 
   C LEVEL 08 Problem 19
                 Use only int variables
                 Use only Decimals
                 Use Functions with a return value
                 Do not use arrays, strings, pointers, etc.
   Question: 
                 Write a program to get three numbers from the user and 
                 print the LCM of those numbers
   Function Name:
                 disp_LCM3
   Answer:
                 Input: 20 40 80 Output: 80
                 Input: 15 78 63 Output: 8190
*/
#include<stdio.h>
int disp_LCM3(int n1,int n2, int n3);
int main()
{
    int number1, number2, number3;
    printf("Input: ");
    scanf("%d %d %d",&number1, &number2, &number3);
    printf("%d",disp_LCM3(number1, number2, number3));
}
int disp_LCM3(int n1,int n2, int n3)
{
    int lcm;
    if(n1>n2)
    {
        if(n1>n3)
            lcm = n1;
        else
            lcm = n3;
    }
    else
    {
        lcm = n2;
    }
    while(1)
    {
        if(!(lcm%n1))
        {
            if(!(lcm%n2))
            {
                if(!(lcm%n3))
                        break;
            }
        }
        lcm++;
    }
    return lcm;
}
