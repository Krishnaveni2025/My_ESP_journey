/* C LEVEL 05 Problem 19
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
  printf("Enter a 4-digit Number: ");
  scanf("%d",&x);
  int is_prime = 1,i = 2;
  x = (x%1000)/10;
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
