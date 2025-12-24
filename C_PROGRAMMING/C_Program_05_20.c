/* C LEVEL 05 Problem 20
  Question: Write a program to print total number single digit prime numbers.
  Answer:
  4
*/
#include<stdio.h>
int main()
{
  int x;
  //your code here
  x = 2;
  int count = 0;

  for(;;)
    {
      if(x>=10)
      {
        break;
      }
      int i = 2,is_prime = 1;
      pcheck:
      if(i<x)
      {
        if((x%i)==0)
        {
          is_prime = 0; 
        }
        else
        {
            i++;
            goto pcheck;
        }
      }
      if(is_prime==1)
      {
        count++;
      }
      x++;
    }
  printf("%d",count);
  return 0;
}
