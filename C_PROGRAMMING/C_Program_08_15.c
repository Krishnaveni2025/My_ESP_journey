/* C LEVEL 08 Problem 15
  Question: Write a program to get a number from the user and print the total number of single digit prime numbers in the number
  Function Name: disp_single_digit_prime
  Answer:
  Input: 163496481 Output: 1
  Input: 364925    Output: 3
  */

#include<stdio.h>
int disp_single_digit_prime(int);
int main()
{
int x,y;
scanf("%d",&x);
y = disp_single_digit_prime(x);
printf("%d",y);
}
int disp_single_digit_prime(int a)
{
int y = 0;
//your code here
  while(a)
    {
  if(((a%10)==2)||((a%10)==3)||((a%10)==5)||((a%10)==7))
  {
    y++;
  }
      a /= 10;
    }
return(y);
}
