/* C LEVEL 05 Problem 17
  Question: Write a program to get a number from the user and print whether that number is prime or not and sum of the digits equal to 14.
  Answer:
Input: 59 - Output: Prime & sum of the digits is 14
Input: 77 - Output: Not prime but sum of digits is 14
Input: 13 - Output: Prime & sum of digits is not 14
Input: 27 - Output: Not prime & sum of digits is not 14
*/
#include<stdio.h>
int main()
{
  int x;
  //your code here
  printf("Enter a Number: ");
  scanf("%d",&x);
  int is_prime = 1,i = 2, sum = 0,temp = x;
  if(x<2)
  {
    is_prime = 0;
  }
  for(;;)
    {
       Ploop:
      if((i>=x)||(is_prime==0))
        {
          break;
        }
     
        if((x%i)==0)
        {
          is_prime = 0;
        }
      
      i++;
      goto Ploop;
    }
    Sloop:
      if(temp!=0)
      {
        sum = sum + (temp%10);
        temp = temp/10;
        goto Sloop;
      }
      
  if((is_prime == 1)&&(sum==14))
  {
    printf("Prime & sum of digits is 14");
  }
  else if((is_prime == 1)&&(sum != 14))
  {
    printf("Prime & sum of digits is not 14");
  }
  else if((is_prime == 0) && (sum == 14))
  {
    printf("Not Prime but sum of digits is 14");
  }
  else
  {
    printf("Not Prime & sum of digits is not 14");
  }
  return 0;
}
