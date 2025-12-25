/* C LEVEL 05 Problem 24
  Question: Write a program to get a number from the user and print the total number of two digit perfect square numbers in the number
  Answer:
  Input: 163496481 Output: 4
  Input: 364925    Output: 4
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
      if(x>10)
      {
        if(((x%100)==16)||((x%100)==25)||((x%100)==64)||((x%100)==36)||((x%100)==49)||((x%100)==81))
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
