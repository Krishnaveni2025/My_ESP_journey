/* C LEVEL 08 Problem 14
  Question: Write a program to get a number from the user and print the total number of two digit perfect square numbers in the number
  Function Name: disp_two_digit_square
  Answer:
  Input: 163496481 Output: 4
  Input: 364925    Output: 4
  */

#include<stdio.h>
int disp_two_digit_square(int);
int main()
{
int x,y;
scanf("%d",&x);
y = disp_two_digit_square(x);
printf("%d",y);
}
int disp_two_digit_square(int a)
{
int y = 0;
//your code here
  while(a>10)
    {
  if(((a%100)==16)||((a%100)==49)||((a%100)==64)||((a%100)==81)||((a%100)==25)||((a%100)==36))
  {
    y++;
  }
      a /= 10;
    }
return(y);
}
