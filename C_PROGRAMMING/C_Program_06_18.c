/* C LEVEL 06 Problem 18
         Use only int variables
         Use only Decimals
         Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
         Don't use Arrays, pointers, strings,etc.
  Question: Write a program to get a number from the user and print whether the first two digits(1's & ten's) of that number is prime or not.
  Answer:
Input: 359 - Output: Prime
Input: 3577 - Output: Not prime
*/
#include<stdio.h>
int main()
{
  int x;
  //your code here
  printf("Enter a number: ");
  scanf("%d",&x);
  int is_prime = 1, i  =  2;
  x = x%100;
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
