/* C LEVEL 04 Program 02
        Use only int variables
        Use only Decimals
        Use only "if/else", goto statements. Don't use  "for/while"
        Don't use arrays, pointers, strings, etc.
   Question: 
        Write a loop program to print 5 to 1 on one by one
   Answer:
        5
        4
        3
        2
        1
  */
#include<stdio.h>
int main()
{
  int number;
  //your code here
  number = 5;
  loop:if(number>0)
  {
    printf("%d\n",number);
    number--;
    goto loop;
  }
  return 0;
}

