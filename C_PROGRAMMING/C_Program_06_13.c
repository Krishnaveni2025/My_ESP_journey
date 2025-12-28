/* C LEVEL 06 Problem 13
  Question: Write a program to get a number from the user print the reverse of the number.
  Answer:
  Input:123456   Output:654321
  Input:76895439 Output:93453867
  Input:675      Output:576
  */
#include<stdio.h>
int main()
{
  int x;
  //your code here
  printf("Enter a Number: ");
  scanf("%d",&x);
  int rev = 0;
  while(1)
    {
      //your code here
      loop:
      if(x)
      {
        rev = (rev*10)+(x%10);
        x = x/10;
        goto loop;
      }
      printf("%d",rev);
      break;
    }
}

