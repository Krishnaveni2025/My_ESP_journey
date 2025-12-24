/* C LEVEL 05 Problem 18
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
  printf("Enter a Number: ");
  scanf("%d",&x);
  int is_prime = 1,i = 2;
  x = x%100;
  if(x<2)
  {
    is_prime = 0;
  }
  for(;;)
    {
       Ploop:
      if((i>=x)||(is_prime==0))
        {
          break;
        }
     
        if((x%i)==0)
        {
          is_prime = 0;
        }
      
      i++;
      goto Ploop;
    } 
  if(is_prime)
  {
    printf("Prime");
  }
  else
  {
    printf("Not Prime");
  }
  return 0;
}
