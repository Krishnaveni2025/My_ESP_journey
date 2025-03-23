//Question:  Get a Two-digit number from user and print the digit in “Ones” position 
//Example:  
//User Enters “78”   
//Answer - 8
/*#include<stdio.h> 
int main () 
{ 
int x, y; 
printf ("Enter a TWO-digit Number: "); 
scanf ("%d", &x); 
// Your Program Here
y = x%10; 
printf ("The digit in Ones position is %d\n",y); 
}*/
/*Using Functions*/
#include<stdio.h>
int ones_digit(int number);//Function Declaration
int main()
{
    int x,result;
    printf("Enter a Two-Digit Number: ");
    scanf("%d",&x);
    result = ones_digit(x);//Calling Function
    printf("Result = %d",result);
    return 0;
}
int ones_digit(int number)//Function Defination
{
    int ones_position = number%10;
    return ones_position;
}