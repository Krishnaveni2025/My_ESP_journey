//Question: Write a program to print the sum of all Three digit Prime numbers
//Assume 0 & 1 are not Prime.
//Answer : 75067
/*#include<stdio.h>
int main(){
int x,y,sum;
sum=0;
    for(x=100;x<1000;x++){
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
printf("The sum of all THREE digit prime numbers are: %d",sum);
}*/
/*-----------------------------------Using Function---------------------------------*/
#include <stdio.h>
int three_digit_prime_numbers(); // Function Declaration
int main()                        // Main Fucntion
{
    int total_sum;
    total_sum = three_digit_prime_numbers(); // Calling Function
    printf("The sum of all three digit prime numbers are: %d", total_sum);
    return 0;
}
int three_digit_prime_numbers() // Function Defination
{
    int x, y, sum;
    sum = 0;
    for (x = 100; x < 1000; x++)
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