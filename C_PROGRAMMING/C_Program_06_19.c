/* C LEVEL 06 Problem 19
  Question: Write a program to get a four digit number from the user and print whether the middle two digits(10's & 100's) of that number is prime or not.
  Answer:
Input: 6359 - Output: Not Prime
Input: 3537 - Output: Prime
*/
#include<stdio.h>
int main()
{
  int x;
  //your code here
  printf("Enter a Four digit number: ");
  scanf("%d",&x);
  int i = 2, is_prime = 1;
  x = (x%1000)/10;
  while(1)
    {
      //your code here
      loop:
      if((i>=x)||(is_prime == 0))
      {
        break;
      }
      if(!(x%i))
      {
        is_prime = 0;
      }
      i++;
      goto loop;
    }
  if(is_prime)
      printf("Prime");
  else
      printf("Not Prime");
  return 0;
}
