/* C LEVEL 06 Problem 30
         Use only int variables
         Use only Decimals
         Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
         Don't use Arrays, pointers, strings,etc.
  Question: Write a program to get two numbers from the user and print the HCF of those numbers
  Answer:
  Input: 20 40  Output: 20
  Input: 15 78  Output: 3
  */
#include<stdio.h>
int main()
{
    int number1, number2, hcf;
    printf("Enter Two Numbers: ");
    scanf("%d %d",&number1, &number2);
    for(;;)
    {
        loop:
        if(number2!=number1)
        {
            if(number1>number2)
            {
                number1 -= number2;
            }
            else
            {
                number2 -= number1;
            }
            goto loop;
        }
        break;
    }
    printf("Output: %d",number1);
}
