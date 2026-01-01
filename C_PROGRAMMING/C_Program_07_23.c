/* C LEVEL 07 Problem 23
  Question: Write a program to get a number from the user and print the total number of single digit perfect square numbers in the number
  Function Name: disp_single_digit_square
  Answer:
  Input: 123456789 Output: 3
  Input: 987531    Output: 2
  */

#include<stdio.h>
void disp_single_digit_square(int);
int main()
{
int x;
scanf("%d",&x);
disp_single_digit_square(x);
}
void disp_single_digit_square(int x)
{
//your code here
  int count = 0;
  while(x)
    {
      if(((x%10)==1)||((x%10)==4)||((x%10)==9))
      {
        count++;
      }
      x /= 10;
    }
  printf("%d",count);
}
