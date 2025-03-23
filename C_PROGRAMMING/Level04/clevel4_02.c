//C Level_04_Problems – 2 
//Question:  Get a Two digit number from user and print the digit in “Tens” position 
//Example: 
//User Enters “78” 
//Answer - 7  
/*#include<stdio.h> 
int main () 
{ 
int x, y; 
printf("Enter a TWO digit Number : "); 
scanf("%d",&x); 
// Your Program Here 
y = x/10;
printf("The digit in Tens position is %d\n",y); 
} 
*/
/*Using Function*/
#include<stdio.h>
int tens_digit(int number);//Function Declaration
int main()
{
    int x,result;
    printf("Enter a Two-Digit Number: ");
    scanf("%d",&x);
    result = tens_digit(x);//Calling Function
    printf("Result = %d",result);
    return 0;
}
int tens_digit(int number)//Function Defination
{
    int tens_position = number/10;
    return tens_position;
}