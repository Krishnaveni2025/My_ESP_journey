/* C LEVEL 08 Problem 08
  Question: Write a program to get a number from the user and interchange the first and last digits and print the result 
  Function Name: disp_interchange_first_last_digit
  Answer:
  Input:123456   Output:623451
  Input:76895439 Output:96895437
  Input:675      Output:576
  */
#include<stdio.h>
int disp_interchange_first_last_digit(int);
int main()
{
int x,y;
scanf("%d",&x);
y = disp_interchange_first_last_digit(x);
printf("%d",y);
}
int disp_interchange_first_last_digit(int a)
{
int y = 0;
//your code here
int first, last , temp,middle, power = 1;
  first = a%10;
  temp = a;
  while(temp>10)
    {
      power *= 10;
      temp /= 10;
    }
  last = temp;
  middle = (a%power)/10;
  y = (first*power)+(middle*10)+last;
  return (y);
}
