/* C LEVEL 05 Problem 25
        Use only int variables
        Use only Decimals
        Use "for" statements to solve the problems. "If" also can be used to decision making but not for loop.
        Don't use Arrays, pointers, strings,etc.
   Question: 
        Write a program to get a number from the user and 
        print the total number of single digit prime numbers in the number
   Answer:
        Input: 163496481 Output: 1
        Input: 364925    Output: 3
  */
#include<stdio.h>
int main()
{
  int number;
  //your code here
  printf("Enter a number: ");
  scanf("%d",&number);
  int p_count = 0, i , is_prime;
  for(;;)
  {
      loop1:
      i = 2, is_prime = 1;
      if(number>=2)
      {
       loop:
            if(i<=(number%10))
            {
                if(!((number%10)%i))
                {
                    is_prime = 0;
                }
                i++;
                goto loop;
            }
            if(is_prime)
                 {   p_count++; }
            number /= 10;
            goto loop1;          
       }
      break;
  }
  printf("Output: %d",p_count);
}
