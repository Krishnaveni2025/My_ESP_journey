//Question:  Get a Two digit number from the user and 
//print the reverse of it. 
//Example: 
//User Enters “73” 
//Answer - 37 
/*#include<stdio.h> 
int main() 
{ 
int x,y; 
printf("Enter a TWO digit Number : "); 
scanf("%d",&x); 
// Your Program Here 
y = ((x%10)*10)+(x/10);
printf("The reverse of the entered number is %d\n",y); 
} */
/*---------------------Using Function--------------------------*/
#include<stdio.h>
int reverse_2d(int no);//Function Declaration
int main()//Main Function
{
    int x, result;
    printf("Enter a Two-Digit Number: ");
    scanf("%d",&x);
    result = reverse_2d(x);//Calling Function
    printf("The reverse of the entered number is %d\n",result);
    return 0;
}
int reverse_2d(int no)//Function Defination
{
    int reversed ; 
    reversed = ((no%10)*10)+(no/10);
    return reversed;
}