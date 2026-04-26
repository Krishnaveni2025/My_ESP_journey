/* 
  C LEVEL 06 Problem 29
            Use only int variables
            Use only Decimals
            Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            Write a program to get three numbers from the user and 
            print the LCM of those numbers
   Answer:
            Input: 20 40 80 Output: 80
            Input: 15 78 63 Output: 8190
*/
#include<stdio.h>
int lcm(int n1, int n2, int n3);
int main()
{
    int number1, number2, number3;
    printf("Input: ");
    scanf("%d %d %d",&number1, &number2, &number3);
    printf("Output: %d",lcm(number1, number2, number3));
    return 0;
}
int lcm(int n1, int n2, int n3)
{
    int lcm;
    if(n1>n2)
    {
        if(n1>n3) lcm = n1;
        else lcm = n3;
    }
    else lcm = n2;
    while(1)
    {
        if(!(lcm%n1))
        {
            if(!(lcm%n2))
            {
                if(!(lcm%n3))
                        return lcm;
            }
        }
        lcm++;
    }
}
