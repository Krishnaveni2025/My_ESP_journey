/* C LEVEL 04 Program 10
        Use only int variables
        Use only Decimals
        Use only "if/else", goto statements. Don't use  "for/while"
        Don't use arrays, pointers, strings, etc.
   Question: 
        Write a loop program to print sum of two digit odd numbers whose ten's digit is 7
   Answer:
        375
  */
#include<stdio.h>
int main()
{
  int number;
  //your code here
  number = 11;
  int sum = 0;
  loop:if(number<100)
  {
    if(number%2){
    if((number/10)==7)
    {
      sum += number;
    }
  }
    number++;
    goto loop;
  }
  printf("Sum = %d",sum);
  return 0;
}


