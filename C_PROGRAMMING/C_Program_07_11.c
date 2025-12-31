/* C LEVEL 07 Problem 11
Question: Write a loop program to get a number from the user and print the total digits in the number
Function Name: count_total_digits
Answer:
Input:123456   Output:6
Input:76895439 Output:8
Input:675      Output:3
*/
#include<stdio.h>
void count_total_digits(int,int);
int main()
{
int x,y;
scanf("%d",&x);
y = 0;
count_total_digits(x,y);
}
void count_total_digits(int x,int y)
{
//your code here
  while(x)
    {
      y++;
      x /= 10;
    }
  printf("%d",y);
}
