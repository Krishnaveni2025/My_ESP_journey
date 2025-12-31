/* C LEVEL 07 Problem 10
Question: Write a loop program to print the sum of two digit odd numbers, whose ten's digit is 7
Function Name: disp_2digit_odd_sum_tens7
Answer:
375
*/
#include<stdio.h>
void disp_2digit_odd_sum_tens7(int);
int main()
{
int x;
x = 0;
disp_2digit_odd_sum_tens7(x);
}
void disp_2digit_odd_sum_tens7(int x)
{
//your code here
  int i;
  for(i = 70; i<80; i++)
    {
      if(i%2)
      {
        if((i/10)==7)
        {
          x += i;
        }
      }
    }
  printf("%d",x);
}
