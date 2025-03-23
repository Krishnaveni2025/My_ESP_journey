// Question: Write a program to print the total number of Three digit odd numbers
// Answer - 450
/*#include<stdio.h>
int main()
{
int x=100;
int c=0;
while(x<1000){
    if(x%2!=0)
         c++;
         x++;
    }
    printf("Total number of Three digit Odd numbers are: %d",c);
 }*/
/*--------------------------------Using Function-----------------------------------------*/
#include <stdio.h>
int three_digit_odd_numbers(); // Funciton Declaration
int main()                     // Main Function
{
    int count;
    count = three_digit_odd_numbers(); // Function Calling
    printf("Total number of Three digit Odd numbers are: %d", count);
    return 0;
}
int three_digit_odd_numbers() // Function Defination
{
    int x=100;
int c=0;
while(x<1000){
    if(x%2!=0)
         c++;
         x++;
    }
    return c;
}