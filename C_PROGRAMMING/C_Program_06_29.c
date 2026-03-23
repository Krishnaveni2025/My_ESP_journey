/* C LEVEL 06 Problem 29
         Use only int variables
         Use only Decimals
         Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
         Don't use Arrays, pointers, strings,etc.
  Question: Write a program to get three numbers from the user and print the LCM of those numbers
  Answer:
  Input: 20 40 80 Output: 80
  Input: 15 78 63 Output: 8190
  */
#include<stdio.h>
int main()
{
    int number1, number2, number3, lcm;
    printf("Enter three Numbers: ");
    scanf("%d %d %d",&number1, &number2, &number3);
    if(number1>number2)
    {
        if(number1>number3)
        {
            lcm = number1;
        }
        else
        {
            lcm = number3;
        }
    }
    else
    {
        lcm = number2;
    }
    for(;;)
    {
        loop:
            if(!(lcm%number1))
            {
               if(!(lcm%number2))
               {
                   if(!(lcm%number3))
                   {
                       break;
                   }
               }
            }
            lcm++;
            goto loop;
    }
    printf("Output: %d",lcm);
}
