/* C LEVEL 07 Problem 16
  Question: Write a program to get a number from the user and print whether that number is prime or not.
  Function Name: check_prime
  Answer:
Input: 31 - Output: Prime
Input: 27 - Output: Not prime
*/
#include<stdio.h>
void check_prime(int);
int main()
{
int x;
scanf("%d",&x);
check_prime(x);
}
void check_prime(int x)
{
//your code here
  int is_prime = 1, i = 2;
  for(i = 2; i<x; i++)
    {
      if((x%i)==0)
      {
        is_prime = 0;
        break;
      }
    }
  if(is_prime)
        printf("Prime");
  else
        printf("Not Prime");
}
