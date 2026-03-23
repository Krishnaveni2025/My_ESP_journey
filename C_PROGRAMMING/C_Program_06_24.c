/* C LEVEL 06 Problem 24
         Use only int variables
         Use only Decimals
         Use "while" statements to solve the problems. "If" also can be used to decision making but not for loop.
         Don't use Arrays, pointers, strings,etc.
   Question: 
         Write a program to get a number from the user and 
         print the total number of two digit perfect square numbers in the number
   Answer:
         Input: 163496481 Output: 4
         Input: 364925    Output: 4
  */
#include<stdio.h>
int main()
{
  int number, twops_count = 0, i;
  //your code here
  printf("Enter a number: ");
  scanf("%d",&number);
  while(1)
  {
      loop:
            if(number>9)
            {
                i =4;
                ploop:
                    if(i<10)
                    {
                        if((number%100)==(i*i))
                                twops_count++;
                    i++;
                    goto ploop;
                    }
                number /= 10;
                goto loop;
            }
        break;
  }
  printf("Output: %d",twops_count);
  return 0;
}
