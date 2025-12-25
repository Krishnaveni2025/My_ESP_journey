/* C LEVEL 05 Problem 25
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
  int p_count = 0;
  for(;;)
    {
      //your code her
      loop:
      if(x>1)
      {
        if(((x%10)==2)||((x%10)==5)||((x%10)==7)||((x%10)==3))
        {
          p_count++;
        }
        x= x/10;
        goto loop;
      }
      printf("%d",p_count);
      break;
    }
}
