/* C LEVEL 07 Problem 18
         Use only int variables
         Use only Decimals
         Use functions with not return value.
         Don't use Arrays, pointers, strings,etc.
   Question: 
         Write a program to get a number from the user and print whether the first two digits(1's & ten's) of that number is prime or not.
   Function Name: 
         check_first_2digits_prime
   Answer:
         Input: 359 - Output: Prime
         Input: 3577 - Output: Not prime
*/
#include<stdio.h>
void check_first_2digits_prime(int n);
int main()
{
    int number;
    scanf("%d",&number);
    check_first_2digits_prime(number);
}
void check_first_2digits_prime(int n)
{
//your code here
  n %= 100;
  int divider = 2, is_prime = 1;
  for(divider = 2; divider<n; divider++)
    {
      if((n%divider)==0)
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
