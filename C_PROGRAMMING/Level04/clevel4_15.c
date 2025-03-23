//Question: Write a program to print the total number of Two digit odd numbers
//Answer - 45
/*#include<stdio.h>
int main()
{
int x=10;
int c=0;
while(x<100){
    if(x%2!=0)
         c++;
         x++;
    }
    printf("Total number of Two digit Odd numbers are: %d",c);
 }*/
/*----------------------------Using FUnction-----------------------------------------------*/
#include<stdio.h>
int two_digit_odd_numbers();//Function Declaration
int main()//Main Funciton
{
    int count;
    count = two_digit_odd_numbers();//Calling Function
    printf("Total number of Two digit Odd numbers are: %d",count);
    return 0;
}
int two_digit_odd_numbers()//Function Defination
{
    int x=10;
int c=0;
while(x<100){
    if(x%2!=0)
         c++;
         x++;
    }
    return c;
}
 