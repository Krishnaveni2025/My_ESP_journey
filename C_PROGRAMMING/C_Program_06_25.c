/* C LEVEL 06 Problem 25
  Question: Write a program to get a number from the user and print the total number of single digit prime numbers in the number
  Answer:
  Input: 163496481 Output: 1
  Input: 364925    Output: 3
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
        if(((x%10)==2)||((x%10)==3)||((x%10)==5)||((x%10)==7))
        {
          count++;
        }
        x /= 10;
        goto loop;
      }
      printf("%d",count);
      break;
    }
}
