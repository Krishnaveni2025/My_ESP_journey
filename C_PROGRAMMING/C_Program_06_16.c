/* C LEVEL 06 Problem 16
  Question: Write a program to get a number from the user and print whether that number is prime or not.
  Answer:
Input: 31 - Output: Prime
Input: 27 - Output: Not prime
*/
#include<stdio.h>
int main()
{
  int x;
  //your code here
  printf("Enter a Number: ");
  scanf("%d",&x);
  int i = 2,is_prime = 1;
  while(1)
    {
      //your code here
      loop:
      if(i<x)
      {
        if(!(x%i))
        {
          is_prime = 0;
          break;
        }
        i++;
        goto loop;
      }
      break;
    }
  if(is_prime)
  {
    printf("Prime");
  }
  else
  {
    printf("Not Prime");
  }
  return 0;
}

