/* C LEVEL 08 Problem 13
  Question: Write a program to get a number from the user and print the total number of single digit perfect square numbers in the number
  Function Name: disp_single_digit_square
  Answer:
  Input: 123456789 Output: 3
  Input: 987531    Output: 2
  */
#include<stdio.h>
int disp_single_digit_square(int);
int main()
{
int x,y;
scanf("%d",&x);
y = disp_single_digit_square(x);
printf("%d",y);
}
int disp_single_digit_square(int a)
{
int y = 0;
//your code here
  while(a)
    {
  if(((a%10)==1)||((a%10)==4)||((a%10)==9))
  {
    y++;
  }
      a /= 10;
    }
return(y);
}
