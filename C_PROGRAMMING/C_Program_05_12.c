/* C LEVEL 05 Problem 12
        Use only int variables
        Use only Decimals
        Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
        Don't use Arrays, pointers, strings,etc.
   Question: 
        Get a number from the user print the sum of all digits.
   Answer:
        Input:123456   Output:21
        Input:76895439 Output:51
        Input:675      Output:18
  */
#include<stdio.h>
int main()
{
  int number;
  //your code here
  printf("Enter a Number: ");
  scanf("%d",&number);
  int sum = 0;
  for(;;)
    {
      //your code here
      loop:
      if(number)
      {
        sum = sum + (number%10);
        number /= 10;
        goto loop;
      }
      break;
    }
    printf("%d",sum);
}
