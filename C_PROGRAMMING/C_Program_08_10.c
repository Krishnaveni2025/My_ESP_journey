/* C LEVEL 08 Problem 10
  Question: Write a program to get a number from the user and print whether that number is prime or not.
  Function Name: check_prime
  Answer:
Input: 31 - Output: Prime
Input: 27 - Output: Not prime
*/
#include<stdio.h>
int check_prime(int);
int main()
{
int x,y;
scanf("%d",&x);
y = check_prime(x);
  if(y)
    printf("Prime");
  else
    printf("Not Prime");
}
int check_prime(int a)
{
int y = 1;
//your code here
  for(int i = 2; i <a; i++)
    {
      if(!(a%i))
      {
        y = 0;
        break;
      }
    }
return (y);
}
