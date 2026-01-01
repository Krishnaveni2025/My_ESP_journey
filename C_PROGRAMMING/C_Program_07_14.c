/* C LEVEL 07 Problem 14
  Question: Write a program to get a number from the user and interchange the first and last digits and print the result 
  Function Name: disp_interchange_first_last_digit
  Answer:
  Input:123456   Output:623451
  Input:76895439 Output:96895437
  Input:675      Output:576
  */
#include<stdio.h>
void disp_interchange_first_last_digit(int,int);
int main()
{
int x,y;
scanf("%d",&x);
y = 0;
disp_interchange_first_last_digit(x,y);
}
void disp_interchange_first_last_digit(int num,int result)
{
//your code here
  int first,last,power = 1,middle,temp;
  temp = num;
  while(temp)
    {
      power *= 10;
      temp /= 10;
    }
  power /= 10;
  last = num /power;
  first = num %10;
  middle = (num%power)/10;
  result = (first*power)+(middle*10)+last;
  printf("%d",result);
}
