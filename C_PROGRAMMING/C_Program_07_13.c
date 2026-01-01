/* C LEVEL 07 Problem 13
  Question: Write a program to get a number from the user print the reverse of the number.
  Function Name: disp_reverse_number
  Answer:
  Input:123456   Output:654321
  Input:76895439 Output:93453867
  Input:675      Output:576
  */
#include<stdio.h>
void disp_reverse_number(int,int);
int main()
{
int x,y;
scanf("%d",&x);
  y = 0;
disp_reverse_number(x,y);
}
void disp_reverse_number(int num, int rev)
{
//your code here
  while(num)
    {
      rev = (rev*10)+(num%10);
      num /= 10;
    }
  printf("%d",rev);
}
