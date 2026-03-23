/* C LEVEL 06 Problem 22
         Use only int variables
         Use only Decimals
         Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
         Don't use Arrays, pointers, strings,etc.
   Question: 
         Write a program to get a number from the user and 
         print the total number of two-digit odd numbers in the number
   Answer:
         Input: 12345678 Output: 3
         Input: 987531   Output: 4
  */
#include<stdio.h>
int main()
{
    int number, odd2d_count = 0;
    printf("Enter Number: ");
    scanf("%d",&number);
    while(1)
    {
        loop:
                if(number>9)
                {
                    if((number%100)%2)
                         odd2d_count++;
                    number/=10;
                    goto loop;
                }
        break;
    }
    printf("Output: %d",odd2d_count);
    return 0;
}
