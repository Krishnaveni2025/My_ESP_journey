/* C LEVEL 04 Program 12
Question: Write a program to get a number from the user and print the sum of all digits 
Answer:
Input:123456   Output:21
Input:76895439 Output:51
Input:675      Output:18
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
    y = (x%10) + y;
    x = x/10;
     goto loop;
  }
   printf("Result = %d",y);
  return 0;
}


