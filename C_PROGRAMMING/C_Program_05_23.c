/* C LEVEL 05 Problem 23
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
  int ps_count = 0;
  for(;;)
    {
      //your code her
      loop:
      if(x!=0)
      {
        if(((x%10)==1)||((x%10)==4)||((x%10)==9))
        {
          ps_count++;
        }
        x= x/10;
        goto loop;
      }
      printf("%d",ps_count);
      break;
    }
}
