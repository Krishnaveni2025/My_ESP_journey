/* C LEVEL 06 Problem 15
  Question: Write a program to get a number from the user and if the last digit of the number is even print the same number. 
  If the last digit of the number is odd subtract 1 from the last digit and print the number.(Note: Last Digit - MSB)
  Answer:
  Input:654324   Output:654324 (last digit = 6)
  Input:76895439 Output:66895439 (last digit = 7)
  Input:675      Output:675 (last digit = 6)
  */
#include<stdio.h>
int main()
{
  int x;
  //your code here
  printf("Enter a number: ");
  scanf("%d",&x);
  int num, last, power = 1,result = 0;
  num = x;
  while(1)
    {
      //your code here
      loop:
      if(num)
      {
        power *= 10;
        num /= 10;
        goto loop;
      }
      power /= 10;
      last = x/power;
      if(last%2)
      {
        last--;
        result = (last*power)+(x%power);
        break;
      }
      else
      {
        result = x;
        break;
      }
    }
  printf("%d",result);
  return 0;
}
