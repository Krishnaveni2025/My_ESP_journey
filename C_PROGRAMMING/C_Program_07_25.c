/* C LEVEL 07 Problem 25
  Question: Write a program to get a number from the user and print the total number of single digit prime numbers in the number
  Function Name: disp_single_digit_prime
  Answer:
  Input: 163496481 Output: 1
  Input: 364925    Output: 3
  */

#include<stdio.h>
void disp_single_digit_prime(int);
int main()
{
int x;
scanf("%d",&x);
disp_single_digit_prime(x);
}
void disp_single_digit_prime(int x)
{
//your code here
  int count = 0;
  while(x)
    {
      if(((x%10)==2)||((x%10)==3)||((x%10)==5)||((x%10)==7))
      {
        count++;
      }
      x /= 10;
    }
  printf("%d",count);
}
