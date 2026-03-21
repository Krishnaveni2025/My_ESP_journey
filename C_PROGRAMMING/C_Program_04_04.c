/* C LEVEL 04 Program 04
        Use only int variables
        Use only Decimals
        Use only "if/else", goto statements. Don't use  "for/while"
        Don't use arrays, pointers, strings, etc.
   Question: 
        Write a loop program to print sum of 6 to 1
   Answer:
        21
  */
#include<stdio.h>
int main()
{
  int number,sum;
  //your code here
  number = 6;
  sum = 0;
  loop:if(number>=0)
  {
    sum += number;
    number--;
    goto loop;
  }
  printf("Sum = %d",sum);
  return 0;
}

