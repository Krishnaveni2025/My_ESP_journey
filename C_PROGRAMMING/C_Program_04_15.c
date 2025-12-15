/* C LEVEL 04 Program 15
Question: Write a program to get a number from the userif the last digit of the number is even print the same number. If the last digit of the number is odd subtract 1 from the last digit and print the number

Answer:
Input:654324   Output:654324
Input:76895439 Output:66895439
Input:675      Output:675
  */
#include<stdio.h>
int main()
{
  int x;
  //your code here
  printf("Enter a number: ");
  scanf("%d",&x);
  int first, last = 0, temp, multiplier = 1, result;
  //first = (x % 10);
  temp = x;
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
    result = (last*multiplier)+(x % multiplier);
    printf("%d", result);
  }
  else
  {
    printf("%d",x);
  }        
  return 0;
}




