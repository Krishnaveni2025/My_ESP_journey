/* C LEVEL 04 Program 03
        Use only int variables
        Use only Decimals
        Use only "if/else", goto statements. Don't use  "for/while"
        Don't use arrays, pointers, strings, etc.
   Question: 
        Write a loop program to print sum of 1 to 5
   Answer:
        15
  */
#include<stdio.h>
int main()
{
  int number,sum = 0;
  //your code here
  number = 1;
  sum = 0;
  loop:if(number<6)
  {
    sum += number;
    number++;
    goto loop;
  }
  printf("Sum = %d",sum);
  return 0;
}
