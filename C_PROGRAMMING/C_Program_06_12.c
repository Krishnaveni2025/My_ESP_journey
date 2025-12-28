/* C LEVEL 06 Problem 12
  Question: Get a number from the user print the sum of all digits.
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
  int sum = 0;
  while(1)
    {
      //your code here
      loop:
      if(x)
      {
        sum += (x%10);
        x /= 10;
        goto loop;
      }
      printf("%d",sum);
      break;
    }
}
