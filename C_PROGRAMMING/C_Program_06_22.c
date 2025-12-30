/* C LEVEL 06 Problem 22
  Question: Write a program to get a number from the user and print the total number of two-digit odd numbers in the number
  Answer:
  Input: 12345678 Output: 3
  Input: 987531   Output: 4
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
      if(x<10)
      {
        break;
      }
      loop:
      if(x>10)
      {
          if((x%100)%2)
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
