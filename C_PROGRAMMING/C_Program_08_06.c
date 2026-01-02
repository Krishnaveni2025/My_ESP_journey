/* C LEVEL 08 Problem 06
  Question: Get a number from the user print the sum of all digits.
  Function Name: disp_sum_all_digits
  Answer:
  Input:123456   Output:21
  Input:76895439 Output:51
  Input:675      Output:18
  */
#include<stdio.h>
int disp_sum_all_digits(int);
int main()
{
int x,y;
scanf("%d",&x);
y = disp_sum_all_digits(x);
printf("%d",y);
}
int disp_sum_all_digits(int a)
{
int y = 0;
//your code here
  while(a)
    {
      y += (a%10);
      a /= 10;
    }
return (y);
}
