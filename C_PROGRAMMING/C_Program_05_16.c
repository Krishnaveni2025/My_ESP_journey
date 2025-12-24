/* C LEVEL 05 Problem 16
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
  int is_prime = 1,i = 2;
  if(x<2)
  {
    is_prime = 0;
  }
  for(;;)
    {
       loop:
      if((i>=x)||(is_prime==0))
        {
          break;
        }
     
        if((x%i)==0)
        {
          is_prime = 0;
        }
      
      i++;
      goto loop;
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
