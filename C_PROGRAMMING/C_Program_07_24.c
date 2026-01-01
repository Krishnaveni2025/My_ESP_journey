/* C LEVEL 07 Problem 24
  Question: Write a program to get a number from the user and print the total number of two digit perfect square numbers in the number
  Function Name: disp_two_digit_square
  Answer:
  Input: 163496481 Output: 4
  Input: 364925    Output: 4
  */
#include<stdio.h>
void disp_two_digit_square(int);
int main()
{
int x;
scanf("%d",&x);
disp_two_digit_square(x);
}
void disp_two_digit_square(int x)
{
//your code here
  int count = 0;
  while(x)
    {
      if(((x%100)==16)||((x%100)==25)||((x%100)==36)||((x%100)==49)||((x%100)==64)||((x%100)==81))
      {
        count++;
      }
      x /= 10;
    }
  printf("%d",count);
}
