/* C LEVEL 04 Program 05
        Use only int variables
        Use only Decimals
        Use only "if/else", goto statements. Don't use  "for/while"
        Don't use arrays, pointers, strings, etc.
   Question: 
        Write a loop program to print odd number between 1 and 9
   Answer:
        1
        3
        5
        7
        9
        
  */
#include<stdio.h>
int main()
{
  int number;
  //your code here
  number = 1;
  loop:if(number<10)
  {
    if(number%2){
    printf("%d\n",number);
  }
    number++;
    goto loop;
  }
  return 0;
}

