/* C LEVEL 05 Problem 14
        Use only int variables
        Use only Decimals
        Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
        Don't use Arrays, pointers, strings,etc.
   Question: 
        Write a program to get a number from the user and interchange the first and last digits and print the result .
   Answer:
        Input:123456   Output:623451
        Input:76895439 Output:96895437
        Input:675      Output:576
  */
#include<stdio.h>
int main()
{
  int number;
  //your code here
  printf("Enter a Number: ");
  scanf("%d",&number);
  int middle, first, last, multiplier = 1, result = 0,temp; 
  temp = number;
  for(;;)
    {
      //your code here
      loop:
      if(temp>10)
      {
        temp = temp/10;
        multiplier *= 10;
        goto loop;
      }
      break;
    }
    last = temp;
    middle = (number%multiplier)/10;
    first = (number%10)*multiplier;
    result = first+ (middle*10) + last;
    printf("%d",result);
}
