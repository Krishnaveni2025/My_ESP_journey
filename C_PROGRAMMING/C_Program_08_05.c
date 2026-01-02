/* C LEVEL 08 Problem 05
Question: Write a program to get a number from the user and print the total number of digits in that number
Function Name: count_total_digits
Answer:
Input:123456   Output:6
Input:76895439 Output:8
Input:675      Output:3
*/
#include<stdio.h>
int count_total_digits(int);
int main()
{
int x,y;
scanf("%d",&x);
y = count_total_digits(x);
printf("%d",y);
}
int count_total_digits(int a)
{
int y = 0;
//your code here
  while(a)
    {
      y++;
      a /= 10;
    }
return (y);
}
