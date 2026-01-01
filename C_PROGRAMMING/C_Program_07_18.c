/* C LEVEL 07 Problem 18
  Question: Write a program to get a number from the user and print whether the first two digits(1's & ten's) of that number is prime or not.
  Function Name: check_first_2digits_prime
  Answer:
Input: 359 - Output: Prime
Input: 3577 - Output: Not prime
*/
#include<stdio.h>
void check_first_2digits_prime(int);
int main()
{
int x;
scanf("%d",&x);
check_first_2digits_prime(x);
}
void check_first_2digits_prime(int x)
{
//your code here
  x %= 100;
  int i = 2, is_prime = 1;
  for(i = 2; i<x; i++)
    {
      if((x%i)==0)
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
