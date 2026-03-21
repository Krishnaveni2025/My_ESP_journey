/* C LEVEL 04 Program 07
        Use only int variables
        Use only Decimals
        Use only "if/else", goto statements. Don't use  "for/while"
        Don't use arrays, pointers, strings, etc.
   Question: 
        Write a loop program to print two digit odd numbers whose sum of digits are 7
   Answer:
        25
        43
        61
  */
#include<stdio.h>
int main()
{
  int number;
  //your code here
  number = 11;
  loop:if(number<100)
  {
    if(number%2)
    {
        if((number%10)+(number/10)==7)
        {
            printf("%d\n",number);
        }
    }
    number++;
    goto loop;
  }
  return 0;
}
