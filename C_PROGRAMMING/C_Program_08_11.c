/* C LEVEL 08 Problem 11
  Question: Write a program to get a number from the user and print the total number of digits which are odd in that number
  Function Name: disp_total_odd_digits
  Answer:
  Input: 12345678 Output: 4
  Input: 987531   Output:5
  */
#include<stdio.h>
int disp_total_odd_digits(int);
int main()
{
int x,y;
scanf("%d",&x);
y = disp_total_odd_digits(x);
printf("%d",y);
}
int disp_total_odd_digits(int a)
{
int y = 0;
//your code here
  while(a)
    {
      if((a%10)%2)
      {
        y++;
      }
      a /= 10;
    }
return (y);
}
