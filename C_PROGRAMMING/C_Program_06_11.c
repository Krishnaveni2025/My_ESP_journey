/* C LEVEL 05 Problem 11
  Question: Get a number from the user print the total number of digits in that number.
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
  int count = 0;
  while(1)
    {
      //your code here
      loop:
      if(x)
      {
        count++;
        x/=10;
        goto loop;
      }
      printf("%d",count);
      break;
    }
}
