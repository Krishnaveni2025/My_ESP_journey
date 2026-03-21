/* C LEVEL 05 Problem 08
        Use only int variables
        Use only Decimals
        Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
        Don't use Arrays, pointers, strings,etc.
   Question: 
        Write a loop program to print two digit even numbers, who's sum of digits are 6.
   Answer:
        24
        42
        60
  */
#include<stdio.h>
int main()
{
  int number;
  //your code here
  number  = 11;
  for(;;)
    {
      //your code here
      loop:
      if(number<100)
      {
        if(!(number%2))
        {
         if((number/10)+(number%10)==6)
           printf("%d\n",number);
        }
        number++;
        goto loop;
      }
      break;
    }  
}
