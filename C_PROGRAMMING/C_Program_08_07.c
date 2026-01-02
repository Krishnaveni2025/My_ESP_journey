/* C LEVEL 08 Problem 07
  Question: Write a program to get a number from the user print the reverse of the number.
  Function Name: disp_reverse_number
  Answer:
  Input:123456   Output:654321
  Input:76895439 Output:93453867
  Input:675      Output:576
  */
#include<stdio.h>
int disp_reverse_number(int);
int main()
{
int x,y;
scanf("%d",&x);
y = disp_reverse_number(x);
  printf("%d",y);
}
int disp_reverse_number(int a)
{
int y = 0;
//your code here
  while(a)
    {
      y = (y*10)+(a%10);
      a /= 10;
    }
return (y);
}
