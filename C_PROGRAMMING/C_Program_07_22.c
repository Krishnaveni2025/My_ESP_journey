/* C LEVEL 07 Problem 22
  Question: Write a program to get a number from the user and print the total number of two-digit odd numbers in the number
  Function Name: disp_total_2digit_odd
  Answer:
  Input: 12345678 Output: 3
  Input: 987531   Output: 4
  */
#include<stdio.h>
void disp_total_2digit_odd(int);
int main()
{
int x;
scanf("%d",&x);
disp_total_2digit_odd(x);
}
void disp_total_2digit_odd(int x)
{
//your code here
  int count = 0;
  while(x>10)
    {
      if((x%100)%2)
      {
        count++;
      }
      x /= 10;
    }
  printf("%d",count);
}
