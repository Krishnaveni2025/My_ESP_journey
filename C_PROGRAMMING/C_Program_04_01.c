/* C LEVEL 04 Program 01
        Use only int variables
        Use only Decimals
        Use only "if/else", goto statements. Don't use  "for/while"
        Don't use arrays, pointers, strings, etc.
   Question: 
        Write a loop program to print 1 to 5 on one by one
   Answer:
        1
        2
        3
        4
        5
  */
#include<stdio.h>
int main()
{
  int number;
  //your code here
  number = 1;
  loop:if(number<6)
  {
    printf("%d\n",number);
    number++;
    goto loop;
  }
  return 0;
}
