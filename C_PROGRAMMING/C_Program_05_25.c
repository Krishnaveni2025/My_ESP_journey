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
    int number, sprime_count = 0, divider, is_prime, digit;
    
    printf("Enter Number: ");
    scanf("%d", &number);

    while(number > 0)
    {
        loop:
            // 1. Extract the specific digit we want to check
            digit = number % 10;
            divider = 2;
            is_prime = 1;

            // 2. Prime check logic for the single digit
            if(digit < 2) 
            {
                is_prime = 0; // 0 and 1 are not prime
            }
            else 
            {
                pcheck:
                    if(divider < digit)
                    {
                        if(digit % divider == 0)
                        {
                            is_prime = 0;
                            // We found a factor, no need to check more for this digit
                        }
                        else 
                        {
                            divider++;
                            goto pcheck;
                        }
                    }
            }

            // 3. Increment count if the digit was prime
            if(is_prime)
            {
                sprime_count++;
            }

            // 4. Move to the next digit
            number /= 10;
            
            // If there are more digits, go back to the top
            if(number > 0)
            {
                goto loop;
            }
            else
            {
                break; 
            }
    }

    printf("Output: %d", sprime_count);
    return 0;
}
