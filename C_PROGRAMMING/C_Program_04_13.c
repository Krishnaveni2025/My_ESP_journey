/* C LEVEL 04 Program 13
        Use only int variables
        Use only Decimals
        Use only "if/else", goto statements. Don't use  "for/while"
        Don't use arrays, pointers, strings, etc.
   Question: 
        Write a program to get a number from the user and print the reverse of the number
   Answer:
        Input:123456   Output:654321
        Input:76895439 Output:93459867
        Input:675      Output:576
  */
#include<stdio.h>
int main()
{
  int number;
  //your code here
  printf("Enter a number: ");
  scanf("%d",&number);
  int reverse = 0;
  loop:if(number)
  {
    reverse = (reverse*10) + (number%10);
    number /= 10;
     goto loop;
  }
   printf("Result = %d",reverse);
  return 0;
}
