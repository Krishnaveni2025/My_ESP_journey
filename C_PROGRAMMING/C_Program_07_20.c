/* C LEVEL 07 Problem 20
  Question: Write a program to print total number single digit prime numbers.
  Function Name: disp_count_single_digit_prime
  Answer:
  4
*/
#include<stdio.h>
void disp_count_single_digit_prime(int);
int main()
{
int x;
x = 2;
disp_count_single_digit_prime(x);
}
void disp_count_single_digit_prime(int x)
{
//your code here
  int i  = 2, is_prime, count = 0;
  while(x<10)
    {
        is_prime = 1;
        for(i = 2; i<x; i++)
        {
            if(!(x%i))
            {
                is_prime = 0;
            }
        }
        if(is_prime)
        {
            count++;
        }
      x++;
    }
    printf("%d",count);
}
