/* C LEVEL 04 Program 07
        Use only int variables
        Use only Decimals
        Use only "if/else", goto statements. Don't use  "for/while"
        Don't use arrays, pointers, strings, etc.
Question: Write a loop program to print two digit odd numbers whose sum of digits are 7
Answer:
25
43
61
  */
#include<stdio.h>
int main()
{
  int x;
  //your code here
  x = 11;
  loop:if(x<100)
  {
    if(x%2){
    if((x%10)+(x/10)==7)
    {
      printf("%d\n",x);
    }
  }
    x++;
    goto loop;
  }
  return 0;
}
