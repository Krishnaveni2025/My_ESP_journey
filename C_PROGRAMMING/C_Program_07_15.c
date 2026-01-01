/* C LEVEL 07 Problem 15
  Question: Write a program to get a number from the user and if the last digit of the number is even print the same number. 
  If the last digit of the number is odd subtract 1 from the last digit and print the number.(Note: Last Digit - MSB)
  Function Name: check_last_digit_odd
  Answer:
  Input:654324   Output:654324 (last digit = 6)
  Input:76895439 Output:66895439 (last digit = 7)
  Input:675      Output:675 (last digit = 6)
  */
#include<stdio.h>
void check_last_digit_odd(int);
int main()
{
int x;
scanf("%d",&x);
check_last_digit_odd(x);
}
void check_last_digit_odd(int x)
{
//your code here
  int result = 0,temp = x, power = 1, last;
  while(temp)
    {
      temp /= 10;
      power *= 10;
    }
  power /= 10;
  last = x/power;
  if(last%2)
  {
    result = (((last-1)*power) + (x%power));
  }
  else
  {
    result = x;
  }
  printf("%d",result);
}
