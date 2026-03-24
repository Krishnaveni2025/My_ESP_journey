/* C LEVEL 07 Problem 21
         Use only int variables
         Use only Decimals
         Use functions with not return value.
         Don't use Arrays, pointers, strings,etc.
  Question: Write a program to get a number from the user and print the total number of digits which are odd in that number
  Function Name: disp_total_odd_digits
  Answer:
  Input: 12345678 Output: 4
  Input: 987531   Output:5
  */
#include<stdio.h>
void disp_total_odd_digits(int);
int main()
{
int x;
scanf("%d",&x);
disp_total_odd_digits(x);
}
void disp_total_odd_digits(int x)
{
//your code here
  int count = 0;
  while(x)
    {
      if((x%10)%2)
            count++;
      x /= 10;
    }
  printf("%d",count);
}
