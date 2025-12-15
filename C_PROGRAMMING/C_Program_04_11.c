/* C LEVEL 04 Program 11
Question: Write a program to get a number from the user and print the total number of digits in that number 
Answer:
Input:123456   Output:6
Input:76895439 Output:8
Input:675      Output:3
  */
#include<stdio.h>
int main()
{
  int x;
  //your code here
  printf("Enter a number: ");
  scanf("%d",&x);
  int y = 0;
  loop:if(x)
  {
    y++;
    x = x/10;
     goto loop;
  }
   printf("Result = %d",y);
  return 0;
}


