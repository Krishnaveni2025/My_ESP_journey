//Question:  Get a Three digit number from user and
// print the digit in “Hundreds”position 
//Example: 
//User Enters “738” 
//Answer - 7 
/*
#include<stdio.h> 
int main() 
{ 
int x,y; 
printf("Enter a THREE digit Number : "); 
scanf("%d",&x); 
// Your Program Here 
y = x/100;
printf("The digit in Hundreds position is %d\n",y); 
} */
/*---------------------Using Functions--------------------*/
#include<stdio.h>
int hundreds_position(int no);//Function Declaration
int main()  //Main Function
{
    int x, result;
    printf("Enter a Three-Digit number: ");
    scanf("%d",&x);
    result = hundreds_position(x);//Calling Function
    printf("The digit in Hundreds position is %d\n",result);
    return 0;
}
int hundreds_position(int no) //Function Defination
{
    int hundreds_digit;
    hundreds_digit = no/100;
    return hundreds_digit;
}
