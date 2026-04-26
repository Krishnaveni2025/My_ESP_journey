/* 
   C LEVEL 06 Problem 28
            Use only int variables
            Use only Decimals
            Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
            Don't use Arrays, pointers, strings,etc.
   Question: 
            Write a program to get ttwo numbers from the user and 
            print the LCM of those numbers
   Answer:
            Input: 20 40 Output: 40
            Input: 15 78 Output:390
  */
#include<stdio.h>
int lcm(int n1, int n2);
int main()
{
    int number1, number2;
    printf("Input: ");
    scanf("%d %d",&number1, &number2);
    printf("Output: %d",lcm(number1, number2));
    return 0;
}
int lcm(int n1, int n2)
{
    int lcm;
    if(n1>n2) lcm = n1;
    else lcm = n2;
    while(1)
    {
        if(!(lcm%n1))
        {
            if(!(lcm%n2))
            {
                return lcm;
            }
        }
        lcm++;
    }
}
