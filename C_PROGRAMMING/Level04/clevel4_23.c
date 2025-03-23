// Question: Write a program to print the sum of all single digit Prime numbers
// Assume 0 & 1 are not Prime.
// Answer : 18
/*#include<stdio.h>
int main(){
int x,y,sum;
sum=0;
    for(x=2;x<9;x++){
        int is_prime = 1;
        for(y=2;y*y<=x;y++){
            if(x%y == 0){
                is_prime =0;
                break ;
            }
        }
        if(is_prime){
        sum=sum+x;
        }
    }
printf("The sum of all single digit prime numbers are: %d",sum);
}*/
/*-----------------------------------Using Function---------------------------------*/
#include <stdio.h>
int single_digit_prime_numbers(); // Function Declaration
int main()                        // Main Fucntion
{
    int total_sum;
    total_sum = single_digit_prime_numbers(); // Calling Function
    printf("The sum of all single digit prime numbers are: %d", total_sum);
    return 0;
}
int single_digit_prime_numbers() // Function Defination
{
    int x, y, sum;
    sum = 0;
    for (x = 2; x < 9; x++)
    {
        int is_prime = 1;
        for (y = 2; y * y <= x; y++)
        {
            if (x % y == 0)
            {
                is_prime = 0;
                break;
            }
        }
        if (is_prime)
        {
            sum = sum + x;
        }
      
    }
    return sum;
}