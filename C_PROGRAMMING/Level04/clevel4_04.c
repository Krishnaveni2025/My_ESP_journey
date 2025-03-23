//Question:  Get a Three digit number from user and 
//print the digit in “Tens” position 
//Example: 
//User Enters “738” 
//Answer - 3 
/*#include<stdio.h> 
int main() 
{ 
int x,y; 
printf("Enter a THREE digit Number : "); 
scanf("%d",&x); 
// Your Program Here 
y = ((x/10)%10);
printf("The digit in Tens position is %d\n",y); 
} 
*/
/*----------------Using Functions------------------------*/
#include<stdio.h>
int tens_digit(int number);//Function Declaration
int main()
{
    int x,result;
    printf("Enter a Three-Digit Number: ");
    scanf("%d",&x);
    result = tens_digit(x);//Calling Function
    printf("Result = %d",result);
    return 0;
}
int tens_digit(int number)//Function Defination
{
    int tens_position = ((number/10)%10);
    return tens_position;
}
      