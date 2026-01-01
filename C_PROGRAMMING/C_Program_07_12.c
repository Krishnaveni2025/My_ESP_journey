/* C LEVEL 07 Problem 12
  Question: Get a number from the user print the sum of all digits.
  Function Name: disp_sum_all_digits
  Answer:
  Input:123456   Output:21
  Input:76895439 Output:51
  Input:675      Output:18
  */
#include<stdio.h>
void disp_sum_all_digits(int, int);
int main()
{
int x,y;
scanf("%d",&x);
y = 0;
disp_sum_all_digits(x,y);
}
void disp_sum_all_digits(int x, int sum)
{
//your code here
  while(x)
    {
      sum += (x%10);
      x /= 10;
    }
  printf("%d",sum);
}
