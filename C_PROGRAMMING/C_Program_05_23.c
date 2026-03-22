/* C LEVEL 05 Problem 23
        Use only int variables
        Use only Decimals
        Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
        Don't use Arrays, pointers, strings,etc.
   Question: 
        Write a program to get a number from the user and 
        print the total number of single digit perfect square numbers in the number
   Answer:
        Input: 123456789 Output: 3
        Input: 987531    Output: 2
  */
#include<stdio.h>
int main()
{
  int number,i = 1;
  //your code here
  printf("Enter a number: ");
  scanf("%d",&number);
  int ps_count = 0;
  for(;;)
  {
      loop:
      if(number)
      {
          i = 1;
          loop1:
            if(i<4)
            {
                if((number%10)==(i*i))
                {
                    ps_count++;
                }
                i++;
                goto loop1;
            }
            number /= 10;
            goto loop;
      }
      break;
  }
  printf("Output: %d",ps_count);
}
