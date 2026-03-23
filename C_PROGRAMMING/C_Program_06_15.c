/* C LEVEL 06 Problem 15
         Use only int variables
         Use only Decimals
         Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
         Don't use Arrays, pointers, strings,etc.
   Question: 
         Write a program to get a number from the user and 
         if the last digit of the number is even print the same number. 
         If the last digit of the number is odd subtract 1 from the last digit and 
         print the number.(Note: Last Digit - MSB)
  Answer:
         Input:654324   Output:654324 (last digit = 6)
         Input:76895439 Output:66895439 (last digit = 7)
         Input:675      Output:675 (last digit = 6)
  */
#include<stdio.h>
int main()
{
    int number, last, multiplier = 1, temp, result;
    printf("Enter Number: ");
    scanf("%d",&number);
    temp = number;
    while(1)
    {
        loop:
                if(temp>9)
                {
                    temp /= 10;
                    multiplier *= 10;
                    goto loop;
                }
            break;
    }
    last = temp;
    if(last%2)
            last = last-1;
    result = (last*multiplier)+(number%multiplier);
    printf("Output: %d",result);
    return 0;
}
