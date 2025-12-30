/* C LEVEL 06 Problem 23
  Question: Write a program to get a number from the user and print the total number of single digit perfect square numbers in the number
  Answer:
  Input: 123456789 Output: 3
  Input: 987531    Output: 2
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
        if(((x%10)==1)||((x%10)==4)||((x%10)==9))
        {
          count++;
        }
        x /= 10;
        goto loop;
      }
      printf("%d",count);
      break;
    }
  return 0;
}
