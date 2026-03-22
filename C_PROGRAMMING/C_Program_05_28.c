/* C LEVEL 05 Problem 28
        Use only int variables
        Use only Decimals
        Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
        Don't use Arrays, pointers, strings,etc.
   Question: 
        Write a program to get ttwo numbers from the user and 
        print the LCM of those numbers
   Answer:
        Input: 20 40  Output: 40
        Input: 15 78  Output:390
  */
#include<stdio.h>
int main()
{
    int number1, number2, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d",&number1, &number2);
    if(number1<number2)
    {
        lcm = number2;
    }
    else
    {
        lcm = number1;
    }
    for(;;)
    {
        loop:
            if(!(lcm%number1))
            {
                if(!(lcm%number2))
                {
                        break;
                }
            }
        lcm++;
        goto loop;
     }
    printf("Output: %d",lcm);
}
