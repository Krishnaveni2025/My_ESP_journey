/* C LEVEL 05 Problem 10
        Use only int variables
        Use only Decimals
        Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
        Don't use Arrays, pointers, strings,etc.
   Question: 
        Write a loop program to print sum of two digit odd numbers, who's ten's digit is 7.
   Answer:
        375
  */
#include<stdio.h>
int main()
{
  int number;
  //your code here
  number  = 11;
  int sum = 0;
  for(;;)
    {
      //your code here
      loop:
      if(number<100)
      {
        if(number%2)
        {
          if((number/10)==7)
            sum = sum + number;
        }
        number++;
        goto loop;
      }
      break;
    }
  printf("%d",sum);
}
