/* C LEVEL 05 Problem 13
  Question: Write a program to get a number from the user print the reverse of the number.
  Answer:
  Input:123456   Output:654321
  Input:76895439 Output:93453867
  Input:675      Output:576
  */
#include<stdio.h>
int main()
{
  int x;
  //your code here
  printf("Entner a Number: ");
  scanf("%d",&x);
  int rev = 0;
  for(;;)
    {
      //your code here
      loop:
      if(x)
      {
        rev = (rev*10)+(x%10);
        x = x/10;
        goto loop;
      }
      break;
    }
  printf("%d",rev);
}
