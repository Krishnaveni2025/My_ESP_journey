/* C LEVEL 04 Program 06
        Use only int variables
        Use only Decimals
        Use only "if/else", goto statements. Don't use  "for/while"
        Don't use arrays, pointers, strings, etc.
   Question: 
        Write a loop program to print two digit odd numbers below 20
        11
        13
        15
        17
        19
  */
#include<stdio.h>
int main()
{
  int number;
  //your code here
  number = 11;
  loop:if(number<20)
  {
    if(number%2){
    printf("%d\n",number);
  }
    number++;
    goto loop;
  }
  return 0;
}
