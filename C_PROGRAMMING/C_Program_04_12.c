/* C LEVEL 04 Program 12
        Use only int variables
        Use only Decimals
        Use only "if/else", goto statements. Don't use  "for/while"
        Don't use arrays, pointers, strings, etc.
   Question: 
        Write a program to get a number from the user and print the sum of all digits 
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
  printf("Enter a number: ");
  scanf("%d",&number);
  int sum = 0;
  loop:if(number)
  {
    sum += (number%10);
    number /= 10;
     goto loop;
  }
   printf("Result = %d",sum);
  return 0;
}
