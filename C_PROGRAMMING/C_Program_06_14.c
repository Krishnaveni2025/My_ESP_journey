/* C LEVEL 06 Problem 14
  Question: Write a program to get a number from the user and interchange the first and last digits and print the result .
  Answer:
  Input:123456   Output:623451
  Input:76895439 Output:96895437
  Input:675      Output:576
  */
#include<stdio.h>
int main()
{
  int x;
  //your code here
  printf("Enter a number: ");
  scanf("%d",&x);
  int num, first, last, power = 1, middle, result = 0;
  first = x%10;
  num = x;
  while(1)
    {
      //your code here
      loop:
      if(num)
      {
        power *= 10;
        num /=10;
        goto loop;
      }
      power = power /10; 
      last = (x/power);
      middle = (x%power)/10;
      result = (first*power) + (middle*10)+ last;
      printf("%d",result);
      break;
   }
}

