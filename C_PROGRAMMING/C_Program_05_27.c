/* C LEVEL 05 Problem 27
         Use only int variables
         Use only Decimals
         Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
         Don't use Arrays, pointers, strings,etc.
   Question: 
         Write a program to print the total count of numbers 
         which are less than 100000 and whose sum of digits is 14
   Answer:
         2710
  */
#include<stdio.h>
int main()
{
    int number = 11, count = 0, sum, temp;
    for(;;)
    {
        loop:
            if(number<100000)
            {
                temp = number, sum = 0;
                sloop:
                    if(temp)
                    {
                        sum += temp%10;
                        temp /= 10;
                        goto sloop;
                    }
                if(sum==14)
                        count++;
                number++;
                goto loop;
            }
        break;
    }
    printf("Output: %d",count);
}
