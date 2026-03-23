/* C LEVEL 06 Problem 14
         Use only int variables
         Use only Decimals
         Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
         Don't use Arrays, pointers, strings,etc.
   Question: 
         Write a program to get a number from the user and 
         interchange the first and last digits and 
         print the result .
   Answer:
         Input:123456   Output:623451
         Input:76895439 Output:96895437
         Input:675      Output:576
  */
#include<stdio.h>
int main()
{
    int number, first, last, multiplier = 1, temp, middle, result;
    printf("Enter Number: ");
    scanf("%d",&number);
    first = number%10;
    temp = number;
    while(1)
    {
        loop:
            if(temp>9)
            {
                multiplier *= 10;
                temp /= 10;
                goto loop;
            }
            break;
    }
    last = temp;
    middle = (number%multiplier)/10;
    result = (first*multiplier)+(middle*10)+last;
    printf("Output: %d",result);
}
