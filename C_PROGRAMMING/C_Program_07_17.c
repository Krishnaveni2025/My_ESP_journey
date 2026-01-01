/* C LEVEL 07 Problem 17
  Question: Write a program to get a number from the user and print whether that number is prime or not and sum of the digits equal to 14.
  Function Name: check_prime_and_sum14
  Answer:
Input: 59 - Output: Prime & sum of the digits is 14
Input: 77 - Output: Not prime but sum of digits is 14
Input: 13 - Output: Prime & sum of digits is not 14
Input: 27 - Output: Not prime & sum of digits is not 14
*/
#include<stdio.h>
void check_prime_and_sum14(int);
int main()
{
int x;
scanf("%d",&x);
check_prime_and_sum14(x);
}
void check_prime_and_sum14(int x)
{
//your code here
  int i = 2, is_prime = 1, sum = 0;
  for(i = 2; i<x; i++)
    {
      if((x%i)==0)
      {
        is_prime = 0;
        break;
      }
    }
  while(x)
    {
      sum += (x%10);
      x /= 10;
    }
  if(is_prime)
  {
    if(sum==14)
    {
      printf("Prime & sum of the digits is 14");
    }
    else
    {
      printf("Prime & sum of digits is not 14");
    }
  }
  else
  {
    if(sum == 14)
    {
      printf("Not prime but sum of digits is 14");
    }
    else
    {
      printf("Not prime & sum of digits is not 14");
    }
  }
}
