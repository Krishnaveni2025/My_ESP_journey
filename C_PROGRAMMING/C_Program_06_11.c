/* C LEVEL 06 Problem 11
         Use only int variables
         Use only Decimals
         Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
         Don't use Arrays, pointers, strings,etc.
   Question: 
         Get a number from the user print the total number of digits in that number.
   Answer:
         Input:123456   Output:6
         Input:76895439 Output:8
         Input:675      Output:3
  */
#include<stdio.h>
int main()
{
    int number, total_digits = 0;
    printf("Enter Number: ");
    scanf("%d",&number);
    while(1)
    {
        loop:
                if(number)
                {
                    total_digits++;
                    number /= 10;
                    goto loop;
                }
            break;
    }
    printf("Output: %d",total_digits);
}
