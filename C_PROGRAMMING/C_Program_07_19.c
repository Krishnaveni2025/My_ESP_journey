/* C LEVEL 07 Problem 19
         Use only int variables
         Use only Decimals
         Use functions with not return value.
         Don't use Arrays, pointers, strings,etc.
   Question: 
         Write a program to get a four digit number from the user and 
         print whether the middle two digits(10's & 100's) of that number is prime or not.
   Function Name: 
         middle_2digits_prime
   Answer:
         Input: 6359 - Output: Not Prime
         Input: 3537 - Output: Prime
*/
#include<stdio.h>
void middle_2digits_prime(int n);
int main()
{
    int number;
    scanf("%d",&number);
    middle_2digits_prime(number);
}
void middle_2digits_prime(int n)
{
//your code here
  n = (n/10)%100;
  int divider = 2, is_prime = 1;
  for(divider = 2; divider<n ; divider++)
    {
      if(!(n%divider))
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
