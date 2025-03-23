//Question: Write a program to print the sum of all Two digit odd numbers
//Answer - 2475
/*#include<stdio.h>
int main()
{
int x=10;
int sum=0;
while(x<100){
    if(x%2!=0)
        sum=sum+x;
        x++;
    }
    printf("The sum of all Two digit Odd numbers are: %d",sum);
 }
 */
/*--------------------------------Using Functions-----------------------------------*/
#include<stdio.h>
int sumOf_twodigit_odd_numbers();//Function  Declaration
int main()//Main Function
{
    int total_sum;
    total_sum = sumOf_twodigit_odd_numbers();//Calling Function
    printf("The sum of all Two digit Odd numbers are: %d",total_sum);
    return 0; 
}
int sumOf_twodigit_odd_numbers()//Function Defination
{
    int x=10;
int sum=0;
while(x<100)
{
    if(x%2!=0)
         sum = sum+x;
         x++;
    }
    return sum;
}
 