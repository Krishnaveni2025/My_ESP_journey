/* C LEVEL 06 Problem 20
  Question: Write a program to print total number single digit prime numbers.
  Answer:
  4
*/
#include<stdio.h>
int main()
{
  int x;
  //your code here
  x=2;
  int i, is_prime, count = 0;
  while(1)
    {
      //your code here
      if(x>10)
          break;
      i = 2, is_prime = 1;
      loop:
      if(i<x)
      {
        if(!(x%i))
        {
          is_prime = 0;
        }
        i++;
        goto loop;
      }
      if(is_prime)
      {
        count++;
      }
      x++;
    }
  printf("%d",count);
  return 0;
}

