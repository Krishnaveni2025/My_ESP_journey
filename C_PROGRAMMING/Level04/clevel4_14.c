//Question: Write a program to print the total number of single digit odd numbers
//Answer - 5
/*#include<stdio.h>
int main()
{
int x=1;
int c=0;
while(x<10){
    if(x%2!=0)
         c++;
         x++;
    }
    printf("Total number of single digit Odd numbers are: %d",c);
 }*/
/*----------------Using Function-----------------------------------------------*/
#include<stdio.h>
int single_digit_odd_numbers();//Function Declaration
int main()//Main Function
{
    int count ;
    count = single_digit_odd_numbers();//Calling Function
    printf("Total number of single digit Odd numbers are: %d",count);
    return 0;
}
int single_digit_odd_numbers()//Function Defination
{
int x=1;
int c=0;
while(x<10){
    if(x%2!=0)
         c++;
         x++;
    }
    return c;
}