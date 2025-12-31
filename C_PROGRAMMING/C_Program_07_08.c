/* C LEVEL 07 Problem 08
Question: Write a loop program to print the two digit even numbers, whose sum of digits are 6
Function Name: disp_2digit_even_sum6
Answer:
24
42
60
*/
#include<stdio.h>
void disp_2digit_even_sum6(int);
int main()
{
int x;
x = 10;
disp_2digit_even_sum6(x);
}
void disp_2digit_even_sum6(int x)
{
//your code here
  for(x = 10; x<100; x++)
    {
      if(!(x%2))
      {
        if((x%10)+(x/10)==6)
        {
          printf("%d\n",x);
        }
      }
    }
}
