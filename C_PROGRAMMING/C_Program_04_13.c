/* C LEVEL 04 Program 13
        Use only int variables
        Use only Decimals
        Use only "if/else", goto statements. Don't use  "for/while"
        Don't use arrays, pointers, strings, etc.
Question: Write a program to get a number from the user and print the reverse of the number
Answer:
Input:123456   Output:654321
Input:76895439 Output:93459867
Input:675      Output:576
  */
#include<stdio.h>
int main()
{
  int x;
  //your code here
  printf("Enter a number: ");
  scanf("%d",&x);
  int y = 0;
  loop:if(x)
  {
    y = (y*10) + (x%10);
    x = x/10;
     goto loop;
  }
   printf("Result = %d",y);
  return 0;
}



