`/* C LEVEL 07 Problem 19
  Question: Write a program to get a four digit number from the user and print whether the middle two digits(10's & 100's) of that number is prime or not.
  Function Name: middle_2digits_prime
  Answer:
Input: 6359 - Output: Not Prime
Input: 3537 - Output: Prime
*/
#include<stdio.h>
void middle_2digits_prime(int);
int main()
{
int x;
scanf("%d",&x);
middle_2digits_prime(x);
}
void middle_2digits_prime(int x)
{
//your code here
  x = (x/10)%100;
  printf("%d\n",x);
  int i = 2, is_prime = 1;
  for(i = 2; i<x; i++)
    {
      if(!(x%i))
      {
        is_prime = 0;
        break;
      }
    }
  if(is_prime)
  {
    printf("Prime");
  }
  else
  {
    printf("Not Prime");
  }
}
