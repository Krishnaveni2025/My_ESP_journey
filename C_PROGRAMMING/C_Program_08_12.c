/* C LEVEL 08 Problem 12
  Question: Write a program to get a number from the user and print the total number of two-digit odd numbers in the number
  Function Name: disp_total_2digit_odd
  Answer:
  Input: 12345678 Output: 3
  Input: 987531   Output: 4
  */
#include<stdio.h>
int disp_total_2digit_odd(int);
int main()
{
int x,y;
scanf("%d",&x);
y = disp_total_2digit_odd(x);
printf("%d",y);
}
int disp_total_2digit_odd(int a)
{
int y = 0;
//your code here
  while(a>10)
    {
      if((a%100)%2)
      {
        y++;
      }
      a /= 10;
    }
return (y);
}

