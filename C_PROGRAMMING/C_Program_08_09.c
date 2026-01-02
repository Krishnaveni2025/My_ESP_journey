/* C LEVEL 08 Problem 09
  Question: Write a program to get a number from the user and if the last digit of the number is even print the same number. 
  If the last digit of the number is odd subtract 1 from the last digit and print the number.(Note: Last Digit - MSB)
  Function Name: check_last_digit_odd
  Answer:
  Input:654324   Output:654324 (last digit = 6)
  Input:76895439 Output:66895439 (last digit = 7)
  Input:675      Output:675 (last digit = 6)
  */
#include<stdio.h>
int check_last_digit_odd(int);
int main()
{
int x,y;
scanf("%d",&x);
y = check_last_digit_odd(x);
  printf("%d",y);
}
int function_name(int a)
{
int y = 0;
//your code here
  int temp = a,last, power = 1;
  while(temp>10)
    {
      power *= 10;
      temp /= 10;
    }
  last = temp;
  if(last%2)
  {
    y = ((last-1)*power)+(a%power);
  }
  else
  {
    y = a;
  }
return (y);
}
