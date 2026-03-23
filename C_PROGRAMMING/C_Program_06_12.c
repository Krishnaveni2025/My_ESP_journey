/* C LEVEL 06 Problem 12
         Use only int variables
         Use only Decimals
         Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
         Don't use Arrays, pointers, strings,etc.
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
