/* C LEVEL 05 Problem 20
        Use only int variables
        Use only Decimals
        Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
        Don't use Arrays, pointers, strings,etc.
   Question: 
        Write a program to print total number single digit prime numbers.
   Answer:
        4
*/
#include<stdio.h>
int main()
{
  int single_digit;
  //your code here
  single_digit = 2;
  int total_count = 0, is_prime, i;

  for(;;)
    {
        i = 2, is_prime = 1;
        if(single_digit>=10)
           { break;}
        pcheck:
            if(i<single_digit)
            {
                if(!(single_digit%i))
                {
                    is_prime = 0;
                }
                i++;
                goto pcheck;
            }
            if(is_prime){
                total_count++;
            }
        single_digit++;
    }
  printf("%d",total_count);
  return 0;
}
