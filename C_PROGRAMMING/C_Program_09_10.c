/*
  C LEVEL 09 Problem 10
  Use only int variables
  Use ont decimals
  use arrays
Question: Get 5 numbers from the user and remove the prime  numbers and create a new array and then  print the same*/


#include<stdio.h>
int main()
{
    int size = 5, input[size],output[size],i,p=2,nonprime=0;
    for(i = 0; i<size; i++)
    {
        printf("Enter Array %d Element: ",i);
        scanf("%d",&input[i]);
    }
    printf("Array Before Removing Prime Numbers\n");
    for(i = 0; i<size; i++)
    {
        printf("%d ",input[i]);
    }
    // Filtering Logic
    for(i = 0; i < size; i++) {
        int isComposite = 0; // This is our flag

        // Numbers less than 2 are not prime, but usually 
        // handled separately. We check for divisors here:
        if (input[i] > 1) {
            for(p = 2; p * p <= input[i]; p++) { // Efficiency: only check up to square root
                if(input[i] % p == 0) {
                    isComposite = 1; // Found a divisor! It's not prime.
                    break;           // Stop checking other divisors
                }
            }
        } else if (input[i] <= 1) {
            // 0 and 1 are not prime numbers
            isComposite = 1;
        }

        // Add to output only if it was flagged as non-prime
        if(isComposite) {
            output[nonprime] = input[i];
            nonprime++;
        }
    }
    if(!(nonprime))
    {
        printf("All are PRIME Numbers");
    }
    else
    {
        printf("\nArray After Removing PRIME Numbers\n");
        for(i = 0; i<nonprime; i++)
        {
            printf("%d ",output[i]);
        }
    }
    
}
