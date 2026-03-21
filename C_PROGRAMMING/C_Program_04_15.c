/* C LEVEL 04 Program 15
        Use only int variables
        Use only Decimals
        Use only "if/else", goto statements. Don't use  "for/while"
        Don't use arrays, pointers, strings, etc.
   Question: 
        Write a program to get a number from the user
        if the last digit of the number is even print the same number. 
        If the last digit of the number is odd subtract 1 from the last digit and 
        print the number
   Answer:
        Input:654324   Output:654324
        Input:76895439 Output:66895439
        Input:675      Output:675
  */
#include<stdio.h>
int main()
{
  int number;
  //your code here
  printf("Enter a number: ");
  scanf("%d",&number);
  int last = 0, temp, multiplier = 1, result;
  temp = number;
    loop:
        if (temp > 10)
        {
            temp /= 10;
            multiplier *= 10;
            goto loop;
        }
        last = temp;
  if(last%2)
  { 
    last = last -1;
    result = (last*multiplier)+(number % multiplier);
    printf("%d", result);
  }
  else
  {
    result = number;
    printf("%d",result);
  }        
  return 0;
}
