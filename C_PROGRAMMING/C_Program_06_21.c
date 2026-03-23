/* C LEVEL 06 Problem 21
         Use only int variables
         Use only Decimals
         Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
         Don't use Arrays, pointers, strings,etc.
  Question: Write a program to get a number from the user and print the total number of digits which are odd in that number
  Answer:
  Input: 12345678 Output: 4
  Input: 987531   Output:5
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
      if(x<=0)
      {
        break;
      }
      loop:
      if(x)
      {
        if((x%10)%2)
        {
          count++;
        }
      x /= 10;
      goto loop;
      }
    }
  printf("%d",count);
  return 0;
}
