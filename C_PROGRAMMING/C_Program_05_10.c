/* C LEVEL 05 Problem 10
  Question: Write a loop program to print sum of two digit odd numbers, who's ten's digit is 7.
  Answer:
  375
  */
#include<stdio.h>
int main()
{
  int x;
  //your code here
  x  = 11;
  int sum = 0;
  for(;;)
    {
      //your code here
      loop:
      if(x<100)
      {
        if(x%2)
        {
          if((x/10)==7)
            sum = sum + x;
        }
        x++;
        goto loop;
      }
      break;
    }
  printf("%d",sum);
}

