/* C LEVEL 05 Problem 22
        Use only int variables
        Use only Decimals
        Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
        Don't use Arrays, pointers, strings,etc.
   Question: 
        Write a program to get a number from the user and 
        print the total number of two digits numbers which are odd in that number
   Answer:
        Input: 12345678 Output: 3
        Input: 987531   Output: 4
  */
#include<stdio.h>
int main()
{
  int number;
  printf("Enter Number: ");
  scanf("%d",&number);
  int odd_count = 0;
  for(;;)
  {
      loop:
            if(number>10)
            {
                if((number%100)%2)
                        odd_count++;
                number/=10;
                goto loop;
            }
        break;
  }
  printf("Ouput: %d",odd_count);
  return 0;
}
