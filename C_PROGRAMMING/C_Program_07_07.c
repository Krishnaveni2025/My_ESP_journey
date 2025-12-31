/* C LEVEL 07 Problem 07
Question: Write a loop program to print the two-digit odd numbers, who's sum of digits are 7
Function Name: disp_2digit_odd_sum7
Answer: 
25
43
61
*/
#include<stdio.h>
void disp_2digit_odd_sum7(int);
int main()
{
int x;
x = 11;
disp_2digit_odd_sum7(x);
}
void disp_2digit_odd_sum7(int x)
{
//your code here
  for(x = 11; x<100; x++)
    {
      if(x%2)
      {
        if((x/10)+(x%10)==7)
        {
          printf("%d\n",x);
        }
      }
    }
}
