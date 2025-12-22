/* C LEVEL 05 Problem 14
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
  printf("Enter a Number: ");
  scanf("%d",&x);
  int middle, first, last, power = 1, result = 0,num; 
  num = x;
  for(;;)
    {
      //your code here
      loop:
      if(num>=10)
      {
        num = num/10;
        power = power*10;
        goto loop;
      }
      printf("power = %d\n", power);
      last = x/power;
      printf("last = %d\n",last);
      middle = (x%power)/10;
      printf("middle = %d\n",middle);
      first = (x%10)*power;
      printf("first = %d\n",first);
      result = first+ (middle*10) + last;
      printf("%d",result);
      break;
    }
}
