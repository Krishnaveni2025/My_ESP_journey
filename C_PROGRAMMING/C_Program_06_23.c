/* C LEVEL 06 Problem 23
         Use only int variables
         Use only Decimals
         Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
         Don't use Arrays, pointers, strings,etc.
   Question: 
         Write a program to get a number from the user and 
         print the total number of single digit perfect square numbers in the number
   Answer:
         Input: 123456789 Output: 3
         Input: 987531    Output: 2
  */
#include<stdio.h>
int main()
{
    int number, single_pscount = 0, i=1;
    printf("Enter Number: ");
    scanf("%d",&number);
    while(1)
    {
        loop:
                if(number)
                {
                    i = 1;
                    ploop:
                            if(i<4)
                            {
                                if((number%10)==(i*i))
                                        single_pscount++;
                                i++;
                                goto ploop;
                            }
                    number /= 10;
                    goto loop;
                }
        break;
    }
    printf("Output: %d",single_pscount);
  return 0;
}
