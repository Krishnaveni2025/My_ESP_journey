/* C LEVEL 04 Program 14
Question: Write a program to get a number from the user and interchange the first and last digits and print the result
Answer:
Input:123456   Output:623451
Input:76895439 Output:73459869
Input:675      Output:576
  */
#include<stdio.h>
int main()
{
  int x;
  //your code here
  printf("Enter a number: ");
  scanf("%d",&x);
  int first, last = 0, temp, multiplier = 1, middle, result;
  first = (x % 10);
  temp = x;
    loop:
        if (temp > 10)
        {
            temp /= 10;
            multiplier *= 10;
            goto loop;
        }
        last = temp;
        middle = (x % multiplier) / 10;
        result = first * multiplier + middle * 10 + last;
        printf("%d", result);
  return 0;
}



