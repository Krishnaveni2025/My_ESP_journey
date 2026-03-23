/* C LEVEL 06 Problem 11
         Use only int variables
         Use only Decimals
         Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
         Don't use Arrays, pointers, strings,etc.
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
