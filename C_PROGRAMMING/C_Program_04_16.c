/* C LEVEL 04 Program 16
Question: Write a program to get a number from the user and print whether the number is prime or not
Answer:
Input:31   Output:prime
Input:27 Output:not prime
  */
#include<stdio.h>
int main()
{
  int x;
  //your code here
  printf("Enter a number: ");
  scanf("%d",&x);
 
 int i = 2, is_prime = 1;

    if (x <= 1)
    {
        is_prime = 0;
    }
    else
    {
        loop:
            if (i * i <= x)
            {
                if (x % i == 0)
                {
                    is_prime = 0;
                    
                }
                else
                {
                i++;
                goto loop;
                }
            }
        }
    if (is_prime == 1)
         printf("Prime");
    else
        printf("Not Prime");    
  return 0;
}
