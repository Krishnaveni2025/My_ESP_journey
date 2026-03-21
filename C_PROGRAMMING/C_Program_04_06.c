/* C LEVEL 04 Program 06
        Use only int variables
        Use only Decimals
        Use only "if/else", goto statements. Don't use  "for/while"
        Don't use arrays, pointers, strings, etc.
Question: Write a loop program to print two digit odd numbers below 20
  */
#include<stdio.h>
int main()
{
  int x;
  //your code here
  x = 11;
  loop:if(x<20)
  {
    if(x%2){
    printf("%d\n",x);
  }
    x++;
    goto loop;
  }
  return 0;
}


