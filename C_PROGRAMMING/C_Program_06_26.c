/* C LEVEL 06 Problem 26
         Use only int variables
         Use only Decimals
         Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
         Don't use Arrays, pointers, strings,etc.
   Question: 
         Write a program to print the biggest 4-digit number which is divisible by 7 and 9
   Answer:
         9954
  */
#include<stdio.h>
int main()
{
  int number;
  //your code here
  number = 1000;
   int big = 0;
  while(1)
    {
      //your code here
      loop:
      if(number<10000)
      {
        if(!(number%7))
        {
            if(!(number%9))
                    big = number;
        }
        number++;
        goto loop;
      }
      break;
    }
    printf("%d",big);
}
