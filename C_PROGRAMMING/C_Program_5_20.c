/* C LEVEL 05 Problem 20
  Question: Write a program to print total number single digit prime numbers.
  Answer:
  4
*/
#include<stdio.h>
int main()
{
  int x;
  //your code here
  x = 2;
  int is_prime = 1,i = 2,count = 0;

  if(x<2)
  {
    is_prime = 0;
  }
  for(;;)
    {
       Ploop:
      if((x<10)||(i>=x)||(is_prime==0))
        {
          break;
        }
     
        if((x%i)==0)
        {
          is_prime = 0;
        }
      count++;
      i++;
      x++;
      goto Ploop;
    }
  printf("%d",count);
  return 0;
}
