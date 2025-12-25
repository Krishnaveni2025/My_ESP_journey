/* C LEVEL 05 Problem 21
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
  int odd_count = 0;
  for(;;)
    {
      //your code her
      loop:
      if(x!=0)
      {
        if((x%10)%2)
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
