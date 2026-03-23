/* C LEVEL 06 Problem 19
         Use only int variables
         Use only Decimals
         Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
         Don't use Arrays, pointers, strings,etc.
   Question: 
         Write a program to get a four digit number from the user and 
         print whether the middle two digits of that number is prime or not.
   Answer:
         Input: 3537 - Output: Prime
         Input: 6359 - Output: Not prime
*/
#include<stdio.h>
int main()
{
  int number;
  //your code here
  printf("Enter a four digit number: ");
  scanf("%d",&number);
  int is_prime = 1, divider  =  2;
  number = (number/10)%100;
  while(1)
    {
      //your code here
      loop:
      if((divider>=number)||(is_prime == 0))
      {
        break;
      }
      if(!(number%divider))
      {
        is_prime = 0;
      }
      divider++;
      goto loop;
    }
  if(is_prime)
      printf("Prime");
  else
      printf("Not Prime");
  return 0;
}
