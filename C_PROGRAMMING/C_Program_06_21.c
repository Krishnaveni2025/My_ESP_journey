/* C LEVEL 06 Problem 21
         Use only int variables
         Use only Decimals
         Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
         Don't use Arrays, pointers, strings,etc.
   Question: 
         Write a program to get a number from the user and 
         print the total number of digits which are odd in that number
   Answer:
         Input: 12345678 Output: 4
         Input: 987531   Output:5
  */
#include<stdio.h>
int main()
{
    int number, odd_count = 0;
    printf("Enter Number: ");
    scanf("%d",&number);
    while(1)
    {
        loop:
                if(number)
                {
                    if((number%10)%2)
                            odd_count++;
                    number /= 10;
                    goto loop;
                }
        break;
    }
    printf("Output: %d",odd_count);
  return 0;
}
