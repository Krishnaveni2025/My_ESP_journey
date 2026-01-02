/* C LEVEL 08 Problem 04
Question: Write a program to print the sum of the two digit odd numbers whose tens digit is 7
Function Name: disp_2digit_odd_sum_tens7
Answer:
375
*/
#include<stdio.h>
int disp_2digit_odd_sum_tens7(int);
int main()
{
int x,y;
x = 71;
y = disp_2digit_odd_sum_tens7(x);
printf("%d",y);
}
int disp_2digit_odd_sum_tens7(int a)
{
int y = 0;
//your code here
  while(a<80)
    {
      if(a%2)
      {
        if((a/10)==7)
        {
          y += a;
        }
      }
      a++;
    }
return (y);
}
