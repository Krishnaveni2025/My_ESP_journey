/* C LEVEL 05 Problem 15
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
  int num,power=1,last;
  num = x;
  for(;;)
    {
      //your code here
      loop:
      if(num>10)
      {
        num = num/10;
        power = power*10;
        goto loop;
      }
      last = x/power;
      if(x%2)
      {
        last = last -1;
        x = (last*power)+(x%power);
        printf("%d",x);
        break;
      }
      printf("%d",x);
      break;
    }
}
