/* C LEVEL 06 Problem 20
         Use only int variables
         Use only Decimals
         Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
         Don't use Arrays, pointers, strings,etc.
   Question: 
         Write a program to print total number single digit prime numbers.
   Answer:
         4
*/
#include<stdio.h>
int main()
{
    int number = 2, single_pcount = 0, divider = 2, is_prime;
    while(1)
    {
        loop:
        divider = 2, is_prime = 1;
                if(number<9)
                {
                    check:
                            if(divider<number)
                            {
                                if(!(number%divider))
                                {
                                    is_prime = 0;
                                }
                                divider++;
                                goto check;
                            }
                            if(is_prime)
                                    single_pcount++;
                    number++;
                    goto loop;
                }
        break;
    }
    printf("Ouput: %d",single_pcount);
  return 0;
}
