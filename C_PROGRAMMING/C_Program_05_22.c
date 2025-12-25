/* C LEVEL 05 Problem 22
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
  int odd_count = 0;
  for(;;)
    {
      //your code her
      loop:
      if(x>10)
      {
        if((x%100)%2)
        {
          odd_count++;
        }
        x= x/10;
        goto loop;
      }
      printf("%d",odd_count);
      break;
    }
}
